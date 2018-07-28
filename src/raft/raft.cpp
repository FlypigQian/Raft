#include "../../include/raft/raft.h"
#include "../../include/raft/state.h"
#include "../../include/raft/raft_rpc/raft_server.h"
#include "../../include/raft/event_queue/event_queue.h"

//#include "raft/identities/follower.h"
//#include "raft/identities/candidate.h"
//#include "raft/identities/leader.h"

#include <iostream>
#include <vector>
#include "../../include/raft/state.h"
#include "../../include/common.h"
#include "../../include/raft/raft_proto/raft_peer_client.h"
#include "../../include/server_info.h"
#include "../../include/raft/identities/identity_base.h"

namespace SJTU {
	using RequestVoteFunc = std::function<CppRequestVoteResponse(CppRequestVoteRequest)>;
	using AppendEntriesFunc = std::function<CppAppendEntriesResponse(CppAppendEntriesRequest)>;

	struct Raft::Impl {
		State state_;
		Timer timer_;
		EventQueue eventQueue_;
		int currentIdentity_;

		std::unique_ptr<IdentityBase> identities_[IdentityNum];

		/// opens up multiple client_ends_, number of which depends on config.
		std::vector<std::unique_ptr<RaftPeerClientImpl> > client_ends_;
		/// because of some strange reason, server_ends_ cannot be copied or ... just use pointers.
		std::vector<std::unique_ptr<RaftServer> > server_ends_;

		const ServerInfo &info;

		boost::atomic<bool> transforming{
				false};  /// if there has been one transformation undergoing, the same transformation shouldn't be applied repeatedly.
		boost::mutex mtx_transform;                /// a mutex used in identity_transform.
		//  ---------------------------------------------------------------------
		explicit Impl(const ServerInfo &info);

		~Impl();

		/**
		 * This function simply invokes identity classes' leave and init function.
		 * But during identity transformation, server state changes (pass by reference).
		 * timer is reset (pass by reference. rpc is set out.
		 * Many heavy work is done, I wanna distribute these works to specialized classes,
		 * thus leaving detailed implementation inside identities.
		 * */
		void IdentityTransform(IdentityNo);

		CppAppendEntriesResponse ProcsAppendEntriesAdapter(CppAppendEntriesRequest);

		CppRequestVoteResponse ProcsRequestVoteAdapter(CppRequestVoteRequest);

		void TimeOutActionAdapter();
	};

	Raft::Impl::Impl(const ServerInfo &info) : info(info) {
#ifndef _NOLOG
		printf("Construct Raft's pImpl...\n");
#endif


#ifndef _NOLOG
		printf("Construct three identities...\n");
#endif


		std::function<void(int)> transformer = std::bind(&Raft::Impl::IdentityTransform, this, std::placeholders::_1);
		identities_[FollowerNo] = std::make_unique<Follower>(state_, timer_, transformer, client_ends_, info);
		identities_[CandidateNo] = std::make_unique<Candidate>(state_, timer_, transformer, client_ends_, info);
		identities_[LeaderNo] = std::make_unique<Leader>(state_, timer_, transformer, client_ends_, info);

		/// initialize client_ends_ and server_ends_.
		/// bind server function adapter into server_end_...
#ifndef _NOLOG
		printf("Create client and server ends...\n");
#endif
		for (const ServerId &srv_id : info.get_srvList()) {
			if (srv_id == info.get_local()) continue;
			client_ends_.push_back(std::make_unique<RaftPeerClientImpl>(
					grpc::CreateChannel(srv_id.toString(), grpc::InsecureChannelCredentials())));

			server_ends_.push_back(std::make_unique<RaftServer>(srv_id));
			server_ends_.back()->BindServiceFunc(std::bind(&Impl::ProcsRequestVoteAdapter, this, std::placeholders::_1),
																					 std::bind(&Impl::ProcsAppendEntriesAdapter, this, std::placeholders::_1));
		}

		currentIdentity_ = DownNo;

		/**
		 * Timer should be modified so that we can specify what action burstOut at which time.
		 * */
#ifndef _NOLOG
		printf("Bind timeout action adapter to timer\n");
#endif
		timer_.BindTimeOutAction(std::bind(&Impl::TimeOutActionAdapter, this));
		timer_.BindPushEvent(std::bind(&EventQueue::addEvent, &eventQueue_, std::placeholders::_1));
	}

	void Raft::Impl::IdentityTransform(const IdentityNo identityNo) {
		/// prevent multiple threads modify "transforming: bool" asynchronously.
		boost::unique_lock<boost::mutex> lk(mtx_transform);
#ifndef _NOLOG
		printf("Try to push transformation into eventQueue_\n");
#endif
		if (transforming) {
			printf("There has been one identical transformation task undergoing... returning..\n");
			return;
		}
		transforming = true;
		lk.unlock();

		eventQueue_.addEvent([this, identityNo]() mutable {
			printf("Event queue start Identity transform\n");
			if (currentIdentity_ != DownNo) identities_[currentIdentity_]->leave();
			currentIdentity_ = identityNo;
			identities_[currentIdentity_]->init();
			transforming = false;
		});
	}

	Raft::Impl::~Impl() {}

	/**
	 * These are adaptable interfaces for server_ends.
	 * */
	CppAppendEntriesResponse Raft::Impl::ProcsAppendEntriesAdapter(CppAppendEntriesRequest request) {
		return identities_[currentIdentity_]->ProcsAppendEntriesFunc(request);
	}

	CppRequestVoteResponse Raft::Impl::ProcsRequestVoteAdapter(CppRequestVoteRequest request) {
		return identities_[currentIdentity_]->ProcsRequestVoteFunc(request);
	}

	/**
	 * This is adaptable interface for timer_.
	 * */
	void Raft::Impl::TimeOutActionAdapter() {
		identities_[currentIdentity_]->TimeOutFunc();
	}
};

namespace SJTU {

	Raft::Raft(const ServerInfo &info) : pImpl(std::make_unique<Impl>(info)) {
#ifndef _NOLOG
		printf("Construct Raft...\n");
#endif
	}

	Raft::~Raft() {

	}

	void Raft::init() {

	}

	void Raft::Start() {

#ifndef _NOLOG
		printf("Raft starts to transform to candidate\n");
#endif
		pImpl->eventQueue_.Start();
		pImpl->IdentityTransform(CandidateNo);
	}

	void Raft::Stop() {

	}
}

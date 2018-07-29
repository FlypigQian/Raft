#ifndef RAFT_PROJ_IDENTITY_BASE_H
#define RAFT_PROJ_IDENTITY_BASE_H


#include <functional>
#include "../state.h"
#include "../raft_proto/cpp_msg_wrapper.h"
#include "../raft_proto/raft_peer_client.h"
#include "../timer/timer.h"
#include "../../server_info.h"

namespace SJTU {
	/**
	 * A base class
	 * */
	class IdentityBase {
	public:
//		IdentityBase() = default;

		explicit IdentityBase(State &state, Timer &timer, std::function<void(int)> transformer,
													std::vector<std::unique_ptr<RaftPeerClientImpl> > &client_ends, const ServerInfo &info) :
				state_(state), timer_(timer), identity_transformer(std::move(transformer)), client_ends_(client_ends),
				info(info) {
//	printf("size of client_ends: %d\n", client_ends_.size());
		}

		virtual ~IdentityBase() { ; }

		/// define two pure virtual functions.
		/// look up virtual functions' definitions clearly.

		virtual void init() = 0;

		virtual void leave() = 0;

		/**
		 * ProcsAppendEntriesFunc and ProcsRequestVoteFunc are two virtual functions implmented by
		 * three candidates. They are bound by raft into server_ends_' function adapters, and invoked
		 * by monitoring server_ends_.
		 *
		 * When raft receives other servers' requests, they generate responses based on their current
		 * status meanwhile, in term, modify themselves.
		 *
		 * I have implemented response generation without self-modification.
		 * I'm going to work on self-modification.
		 * */
		virtual CppAppendEntriesResponse ProcsAppendEntriesFunc(const CppAppendEntriesRequest &);

		/**
		 * (In current naive implementation, because of no client, all clients will vote
		 * for the requester kindly.)
		 * Above is history now.
		 *
		 * */
		virtual CppRequestVoteResponse ProcsRequestVoteFunc(const CppRequestVoteRequest &);

		/**
		 * Timeout functions don't need to be bound to timer,
		 * define a timeoutFuncAdapter in raft or just use a lambda expression.
		 * */
		virtual void TimeOutFunc() = 0;

	protected:
		State &state_;

		/**
	   * Timer is bound into identities not for functionality (has been provided by raft apdapter),
	 	 * but for pause and reset.
	 	 *
	 	 * The stop and restart are completed in init and leave functions.
	 	 * */
		Timer &timer_;

		/**
		 * This identity_transformer is bound to raft's "identity_transform" function, which
		 * pushes a identity_transform lambda function into eventQueue and executed by another
		 * thread. It's the same as invoking by timer_.
		 * */
		std::function<void(int)> identity_transformer;
		std::vector<std::unique_ptr<RaftPeerClientImpl> > &client_ends_;
		const ServerInfo &info;

	protected:
		virtual CppAppendEntriesResponse AppendEntriesResponseGeneration(const CppAppendEntriesRequest &);

		virtual void AppendEntriesSelfModification(const CppAppendEntriesRequest &);

		virtual CppRequestVoteResponse RequestVoteResponseGeneration(const CppRequestVoteRequest &);

		virtual void RequestVoteSelfModification(const CppAppendEntriesRequest &);
	};
};

#endif //RAFT_PROJ_IDENTITY_BASE_H

#ifndef RAFT_PROJ_IDENTITY_BASE_H
#define RAFT_PROJ_IDENTITY_BASE_H

#include "raft/raft_proto/cpp_msg_wrapper.h"
#include "raft/state.h"
#include "raft/timer/timer.h"
#include "common.h"

#include <functional>

namespace SJTU {
	/**
	 * A base class
	 * */
	class IdentityBase {
	public:

		explicit IdentityBase(State &state, Timer &timer, std::function<void(IdentityNo)> transformer) :
				state_(state), timer_(timer), identity_transformer(transformer) {}

		virtual ~IdentityBase() = default;

		/// define two pure virtual functions.
		/// look up virtual functions' definitions clearly.

		virtual void init() = 0;

		virtual void leave() = 0;

		virtual CppAppendEntriesResponse ProcsAppendEntriesFunc(CppAppendEntriesRequest);

		virtual CppRequestVoteResponse ProcsRequestVoteFunc(CppRequestVoteRequest);

		virtual void TimeOutFunc() = 0;

	protected:
		State &state_;
		Timer &timer_;
		std::function<void(IdentityNo)> identity_transformer;
	};
};
#endif //RAFT_PROJ_IDENTITY_BASE_H

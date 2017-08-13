#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include <memory>
#include <stack>

#include "State.h"

namespace Exla {
	typedef std::unique_ptr<State> StateRef;

	class StateMachine {
	public:
		StateMachine() {}
		~StateMachine() {}

		void addState(StateRef newState, bool isReplaceing = true);
		void removeState();

		void processStateChanges();

		StateRef &getActiveState();

	private:
		std::stack<StateRef> _states;
		StateRef _newState;

		bool _isRemoving;
		bool _isAdding;
		bool _isReplacing;
	};
}

#endif // STATE_MACHINE_HPP
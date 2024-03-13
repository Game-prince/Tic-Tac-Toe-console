#include <iostream>
#include <map>
#include "State.h"

class StateMachine {
private:
	std::unique_ptr<State> currentState;
public:
		
	StateMachine() : currentState(std::make_unique<State>()) {}

	bool change(State *newState) {

		if (!newState) {
			std::cerr << "Error: new state is NULL" << std::endl;
			return false;
		}

		currentState->exit();
		// change current state
		currentState.reset(newState);
		currentState->enter();

		return true;
	}

	void render() {
		if (!currentState) {
			std::cout << "Current state is still NULL" << std::endl;
			return;
		}
		currentState->render();
	}

	void update() {
		currentState->update();
	}

};
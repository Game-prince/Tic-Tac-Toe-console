#include <iostream>
#include <map>
#include "Base.cpp"

class StateMachine {
private:
	State *currentState;
public:
		
	StateMachine() {
		currentState = new State();
	}

	void change(State state) {
		currentState->exit();
		*currentState = state;
		currentState->enter();
	}

	void render() {
		currentState->render();
	}

	void update() {
		currentState->update();
	}

};
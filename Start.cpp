#include <iostream>
#include "State.h"

class StartState : public State {
private:
	int currentOption = 1;
public:

	StartState() {}

	void enter() {
		std::cout << "Entering into start state" << std::endl;
	}

	void exit() {}

	void render() {
		std::cout << "\tWelcome to TicTacToe\n" << std::endl;

		std::cout << "1. One Player" << std::endl;
		std::cout << "2. Two Player" << std::endl;
		std::cout << "3. Exit" << std::endl;

		int currentOption;
		std::cout << "Enter your choice: ";
		std::cin >> currentOption;

	}

	void update() {
	}

};
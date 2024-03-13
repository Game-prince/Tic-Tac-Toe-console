#include <iostream>
#include "State.h"

class StartState : public State {
private:
public:

	StartState() {}

	void enter() {}

	void exit() {}

	void render() {
			std::cout << "\tWelcome to TicTacToe\n" << std::endl;

			std::cout << "1. vs AI" << std::endl;
			std::cout << "2. Two Player" << std::endl;
			std::cout << "3. Exit" << std::endl;
	}

	void update() {
			int currentOption;
			std::cout << "Enter your choice: ";
			std::cin >> currentOption;

			while (currentOption < 1 || currentOption > 3) {
				std::cout << "Invalid choice" << std::endl;
				std::cout << "Enter your choice: ";
				std::cin >> currentOption;
			}

			if (currentOption == 1) {
				std::cout << "One Player" << std::endl;
			}
			else if (currentOption == 2) {
				std::cout << "Two Player" << std::endl;
			}
			else if (currentOption == 3) {
				std::exit(0);
				return;
			}
	}

};
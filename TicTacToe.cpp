#include <iostream>
#include "statemachine.cpp"
#include "Start.cpp"

//// function to get the user input
//static int getPlayerChoice() {
//	int playerChoice;
//	std::cout << "Enter your choice: ";
//	std::cin >> playerChoice;
//
//	return playerChoice;
//}
//
//// player
//struct Player
//{
//	Value value;
//};

int main() {


	StateMachine statemachine;
	State* startState = new StartState();
	if (!statemachine.change(startState)) {
		std::cerr << "Error creating StartState" << std::endl;
		return 1;
	}


	// Game loop
	while (true)
	{
		statemachine.render();
		statemachine.update();
	}
}

//int main()
//{
//	std::cout << "\t\tWelcome to TicTacToe\n";
//	std::cout << "\t\tYou have been chosen to play this game\n";
//
//	// Main Loop
//	while (true) {
//
//		int playerChoice;
//		Player player1{}, player2{};
//
//		std::cout << "Choose one option\n";
//		std::cout << "1. Start\n2. Exit\n";
//		std::cout << "Enter 1 or 2\n";
//		playerChoice = getPlayerChoice();
//
//		system("CLS");
//
//		if (playerChoice != 1) break;
//
//		std::cout << "Choose your alias\n";
//		std::cout << "1. X\n2. O\n";
//		std::cout << "Enter 1 or 2\n";
//		playerChoice = getPlayerChoice();
//
//		switch (playerChoice)
//		{
//		case 1:
//			player1.value = X;
//			player2.value = O;
//			break;
//		case 2:
//			player1.value = O;
//			player2.value = X;
//			break;
//		default:
//			break;
//		}
//
//		system("CLS");
//
//		std::cout << "\t\tToss\n";
//		std::cout << "Choose one option\n";
//		std::cout << "1. Heads\n2. Tails\n";
//		playerChoice = getPlayerChoice();
//
//		system("CLS");
//
//		int playerTurn;
//
//		int tossResult = rand() % 10 + 1;
//		if (tossResult > 5) {
//			std::cout << "Player1 the toss\n";
//			playerTurn = 1;
//		}
//		else {
//			std::cout << "Player2 won the toss\n";
//			playerTurn = 2;
//		}
//
//		std::cout << "\nPress 1 to continue\n";
//		playerChoice = getPlayerChoice();
//
//		if (playerChoice != 1) break;
//
//		Board board;
//		Player currentPlayer;
//
//		// Game Loop
//		while (true)
//		{
//			system("cls");
//
//			// check if the game is over
//			int gameStatus = board.isGameOver();
//			if (gameStatus != 0) {
//				std::cout << "Game Over!\n";
//
//				if (gameStatus == 1) {
//					if (playerTurn == 1) std::cout << "Player1 wins\n";
//					else std::cout << "Player2 wins\n";
//				}
//				else {
//					std::cout << "It's a draw\n";
//				}
//
//				std::cout << "\nPress 1 to continue\n";
//				playerChoice = getPlayerChoice();
//
//				while (playerChoice != 1)
//				{
//					std::cout << "Incorrect choice\nPlease Choose again\n";
//					playerChoice = getPlayerChoice();
//				}
//
//				break;
//			}
//
//			std::cout << "Player1 : " << (char)player1.value << "\t\tPlayer2 : " << (char)player2.value << "\n\n";
//
//			if (playerTurn == 1) {
//				std::cout << "Player1's Turn\n";
//				currentPlayer = player1;
//			}
//			else {
//				std::cout << "Player2's Turn\n";
//				currentPlayer = player2;
//			}
//			std::cout << std::endl;
//			board.display();
//			std::cout << std::endl;
//
//			std::vector<int> emptyCells = board.getEmptyCells();
//			std::cout << "Empty Cells: ";
//			for (int i : emptyCells) std::cout << i << " ";
//			std::cout << std::endl;
//
//			std::cout << "Choose an empty block to fill\n";
//			playerChoice = getPlayerChoice();
//
//			while (!board.fillCell(playerChoice, currentPlayer.value)) {
//				std::cout << "Incorrect choice\nPlease Choose again\n";
//				playerChoice = getPlayerChoice();
//			}
//
//			if (playerTurn == 1) playerTurn = 2;
//			else playerTurn = 1;
//		}
//
//		system("cls");
//	}
//}

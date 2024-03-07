#include <iostream>
#include <vector>

enum Value
{
	X = 'X',
	O = 'O',
	E = ' ',
};

class Board {
private:
	std::vector<std::vector<Value>>  board;
public:

	// default constructor
	Board() {
		board = { 3, std::vector<Value>(3, E) };
	}

	// fill a board with a value
	bool fillCell(int cellNumber, Value val) {

		if (cellNumber < 1 || cellNumber > 9) return false;

		int row = (cellNumber - 1) / 3;
		int col = (cellNumber - 1) % 3;


		if (board[row][col] != E) return false;

		board[row][col] = val;
		return true;
	}

	// get empty boards
	std::vector<int> getEmptyCells() {
		std::vector<int> ans;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (board[i][j] == E) ans.emplace_back(i * 3 + j + 1);
			}
		}

		return ans;
	}

	// function to display the current board
	void display() const {
		for (int i = 0; i < 3; i++) {

			// prints the value in the ith row
			for (int j = 0; j < 3; j++) {
				char value = (char)board[i][j];

				std:: cout << value;
				if (j == 2) continue;
				std::cout << "|";
			}
			std::cout << std::endl;

			if (i == 2) continue;

			// prints the underline below each box
			for (int j = 0; j < 3; j++) {
				std::cout << "--";
			}
			std::cout << std::endl;
		}
	}

	// function to check if the game is over
	int isGameOver() {
		// check for rows
		for (int i = 0; i < 3; i++) {
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != E) return 1;
		}

		// check for columns
		for (int i = 0; i < 3; i++) {
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != E) return 1;
		}

		// check for diagonals
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != E) return 1;
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != E) return 1;

		// check for draw
		std::vector<int> emptyCells = getEmptyCells();
		if (emptyCells.size() == 0) return 2;

		return 0;
	}
};
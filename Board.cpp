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
};
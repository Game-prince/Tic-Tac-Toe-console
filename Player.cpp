#include <iostream>
#include "Board.cpp"

class Player {
private:
	Value val;
public:
	// default constructor
	Player() {
		this->val = E;
	}

	// parameterized constructor
	Player(const Value& val)
		: val(val)
	{
	}
};
#ifndef STATE_H
#define STATE_H

class State {
private:
public:
	
	// default constructor
	State() {}

	virtual void  enter() {}
	virtual void  exit() {}
	virtual void render() {}
	virtual void update() {}
};

#endif
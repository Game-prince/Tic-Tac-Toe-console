#ifndef STATE_H
#define STATE_H

class State {
private:
	bool changed;
public:
	
	// default constructor
	State()  {
		changed = false;
	}

	virtual void  enter() {}
	virtual void  exit() {}
	virtual void render() {}
	virtual void update() {}

	bool hasChanged() const{
		return changed;
	}

	void setChanged(bool changed) {
		this->changed = changed;
	}
};

#endif
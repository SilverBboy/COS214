#ifndef CARETAKER_H
#define CARETAKER_H

class CareTaker {

private:
	std::vector<Momento*> history;

public:
	void save(Memento* mem);

	Memento* undo();
};

#endif

#ifndef CARETAKER_H
#define CARETAKER_H

#include <vector>
#include "Memento.h"

class CareTaker {

private:
	std::vector<Memento*> history;

public:
	void save(Memento* mem);

	Memento* undo();
};

#endif

#include "CareTaker.h"

void CareTaker::save(Memento* mem) {
	// TODO - implement CareTaker::save
	// throw "Not yet implemented";
	//I wold recieve the militusMemento and chuck into the history vectory
	//iterate through the history and check if the memento exists. if it exists - overwrite. if not - push to vector.
	bool found = false;
	for (auto it = history.begin(); it != history.end(); ++it){
		if ((*it)->getUnitName() == mem->getUnitName()){
			//overwrite
			delete *it;
			*it = mem;
			found = true;
			break;
		}
	}

	if (!found){
		history.push_back(mem);
	}
}

Memento* CareTaker::undo() {
	// TODO - implement CareTaker::undo
	throw "Not yet implemented";
}

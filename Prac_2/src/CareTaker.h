#ifndef CARETAKER_H
#define CARETAKER_H

#include <vector>
#include <map>
#include "Memento.h"

class CareTaker {

private:
	// std::map<std::string, std::vector<Memento *>> history;
	// std::map<std::string, int> historyCounters;

	std::vector<std::pair<std::string, std::vector<Memento *>>> history;
	std::vector<std::pair<std::string, int>> historyCounters;

	std::vector<std::pair<std::string, int>>::iterator findHistoryCounter(const std::string &unitName);
	std::vector<std::pair<std::string, std::vector<Memento *>>>::iterator findHistory(const std::string &unitName);

public:
	void save(Memento* mem);
	void batchSave(std::vector<Memento*> army);

	Memento *undo(Memento *mem);
	std::vector<Memento *> batchUndo(std::vector<Memento *> army);

	Memento *redo(Memento *mem);
	std::vector<Memento *> batchRedo(std::vector<Memento *> army);
};

#endif

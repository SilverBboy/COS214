#include "CareTaker.h"

std::vector<std::pair<std::string, int>>::iterator CareTaker::findHistoryCounter(const std::string &unitName)
{
    for (auto it = historyCounters.begin(); it != historyCounters.end(); ++it)
    {
        if (it->first == unitName)
        {
            return it;
        }
    }
    return historyCounters.end();
}

std::vector<std::pair<std::string, std::vector<Memento *>>>::iterator CareTaker::findHistory(const std::string &unitName)
{
    for (auto it = history.begin(); it != history.end(); ++it)
    {
        if (it->first == unitName)
        {
            return it;
        }
    }
    return history.end(); 
}

void CareTaker::save(Memento *mem)
{
	std::string unitName = mem->getUnitName();

	if (findHistory(unitName) == history.end())
	{
		// If not, initialize the history and historyCounters for this unit
		history.push_back({unitName, std::vector<Memento *>()});
		historyCounters.push_back({unitName, -1});
	}

	// Remove future steps
	// currently viewing the history of one specific unit
	auto it = findHistoryCounter(unitName);
	if (it != historyCounters.end())
	{
		int i = it->second;
		auto histIt = findHistory(unitName);
		if (i >= 0 && i < histIt->second.size() - 1)
		{
			// Remove future mementos starting from [i + 1] onwards
			for (int j = i + 1; j < histIt->second.size(); ++j)
			{
				delete histIt->second[j];
			}
			histIt->second.resize(i + 1);
		}
	}

	// Push the new memento to the back of the vector
	findHistory(unitName)->second.push_back(mem);

	// Update the history counter for the unit
	findHistoryCounter(unitName)->second = findHistory(unitName)->second.size() - 1;
}

void CareTaker::batchSave(std::vector<Memento *> army)
{
	// Cleanup
	for (auto it = historyCounters.begin(); it != historyCounters.end();)
	{
		if (it->second < 0)
		{
			std::string unitName = it->first;
			auto histIt = findHistory(unitName);

			if (histIt != history.end() && !histIt->second.empty())
			{
				for (auto memento : histIt->second)
				{
					delete memento;
				}
				histIt->second.clear();
			}

			if (histIt != history.end())
			{
				history.erase(histIt);
			}
			it = historyCounters.erase(it);
		}
		else
		{
			++it;
		}
	}

	// Run save function on each memento
	for (Memento *mem : army)
	{
		save(mem);
	}
}

Memento *CareTaker::undo(Memento *mem)
{
	std::string unitName = mem->getUnitName();

	// Save the current state
	save(mem);

	// Decrement the history counter for the current unit
	auto counterIt = findHistoryCounter(unitName);
	if (counterIt != historyCounters.end())
	{
		counterIt->second--;
	}

	// Check if the history counter is < 0
	if (counterIt != historyCounters.end() && counterIt->second < 0)
	{
		// If so, return nullptr.
		// the nullptr will be used to remove the existing unit from the army vector in the Game class
		return nullptr;
	}

	// Otherwise, return the memento under the newly set history counter
	auto histIt = findHistory(unitName);
	if (histIt != history.end() && counterIt != historyCounters.end())
	{
		return histIt->second[counterIt->second];
	}

	return nullptr;
}

std::vector<Memento *> CareTaker::batchUndo(std::vector<Memento *> army)
{
	std::vector<Memento *> result;

	// Process each memento in the army vector
	for (Memento *mem : army)
	{
		// Perform undo operation and store the result
		Memento *undoneMemento = undo(mem);
		result.push_back(undoneMemento);
	}

	return result;
}

Memento *CareTaker::redo(Memento *mem)
{
	std::string unitName = mem->getUnitName();

	// Increment the history counter for the current unit
	auto counterIt = findHistoryCounter(unitName);
	if (counterIt != historyCounters.end())
	{
		counterIt->second++;
	}

	// Check if the history counter is >= the size of the history vector
	auto histIt = findHistory(unitName);
	if (histIt != history.end() && counterIt != historyCounters.end() && counterIt->second >= histIt->second.size())
	{
		// If so, return nullptr.
		// the nullptr will tell the Game class that there are no more redo steps for this unit
		return nullptr;
	}

	// Otherwise, return the memento under the newly set history counter
	if (histIt != history.end() && counterIt != historyCounters.end())
	{
		return histIt->second[counterIt->second];
	}

	return nullptr;
}
std::vector<Memento *> CareTaker::batchRedo(std::vector<Memento *> army)
{
	std::vector<Memento *> result;

	// Process each memento in the army vector
	for (Memento *mem : army)
	{
		// Perform redo operation and store the result
		Memento *redoneMemento = redo(mem);
		result.push_back(redoneMemento);
	}

	return result;
}
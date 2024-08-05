#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Soldiers.h"
#include "SoldierFactory.h"
#include "InfantryFactory.h"
#include "CareTaker.h"

class Game {

private:
	CareTaker caretaker;
	std::vector<Soldiers> army;

public:
	void start();

private:
	void displayMenu();

	void cloneUnit();

	void engageInBattle();

	void saveState();

	void restoreState();

	void createUnit(SoldierFactory* factory);
};

#endif

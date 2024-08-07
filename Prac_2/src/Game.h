#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Soldiers.h"
#include "SoldierFactory.h"
#include "InfantryFactory.h"
#include "BoatmanFactory.h"
#include "ShieldBearerFactory.h"
#include "CareTaker.h"

class Game {
private:
    CareTaker caretaker;
    std::vector<Soldiers*> army;

public:
    void start();

private:
    void displayMenu();
    void displaySoldierMenu();
    void createUnitMenu();
    void cloneUnit();
    void engageInBattle();
    void showArmy();
    void saveState();
    void undo();
    void redo();
    void createUnit(SoldierFactory* factory);
};

#endif // GAME_H

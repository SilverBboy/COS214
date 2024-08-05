#include "Game.h"
#include <iostream>

void Game::start() {
    int choice;
    InfantryFactory infantryFactory;

    while (true) {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            //createUnit(&infantryFactory);
            break;
        case 2:
            cloneUnit();
            break;
        case 3:
            engageInBattle();
            break;
        case 4:
            saveState();
            break;
        case 5:
            restoreState();
            break;
        case 6:
            std::cout << "Exiting game.\n";
            return;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }
    }
}

void Game::displayMenu() {
	std::cout << "1. Create Infantry Unit\n";
	std::cout << "2. Clone Unit\n";
	std::cout << "3. Engage in Battle\n";
	std::cout << "4. Save State\n";
	std::cout << "5. Restore State\n";
	std::cout << "6. Exit\n";
}

void Game::cloneUnit() {
   // TODO - implement Game::saveState
	throw "Not yet implemented";}

void Game::engageInBattle() {
	// TODO - implement Game::engageInBattle
	throw "Not yet implemented";
}

void Game::saveState() {
	// TODO - implement Game::saveState
	throw "Not yet implemented";
}

void Game::restoreState() {
	// TODO - implement Game::restoreState
	throw "Not yet implemented";
}

void Game::createUnit(SoldierFactory* factory) {
   // TODO - implement Game::saveState
	throw "Not yet implemented";
}

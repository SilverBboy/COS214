#include "Game.h"
#include <iostream>

void Game::start() {
    int choice;

    while (true) {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cout << std::endl;

        switch (choice) {
            case 1: // Create unit
                createUnitMenu();
                break;
            case 2: // Clone unit
                cloneUnit();
                break;
            case 3: // Engage in battle
                engageInBattle();
                break;
            case 4: // Save state
                saveState();
                break;
            case 5: // Restore state
                restoreState();
                break;
            case 6: // Exit
                std::cout << "Exiting game.\n";
                return;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
}

void Game::displayMenu() {
    std::cout << "1. Create Unit\n";
    std::cout << "2. Clone Unit\n";
    std::cout << "3. Engage in Battle\n";
    std::cout << "4. Save State\n";
    std::cout << "5. Restore State\n";
    std::cout << "6. Exit\n";
}

void Game::displaySoldierMenu() {
    std::cout << "1. Create Infantry\n";
    std::cout << "2. Create Boatman\n";
    std::cout << "3. Create ShieldBearer\n";
    std::cout << "4. Back to main menu\n";
}

void Game::createUnitMenu() {
    int choice;
    SoldierFactory* factory = nullptr;

    while (true) {
        displaySoldierMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cout << std::endl;

        switch (choice) {
            case 1:
                factory = new InfantryFactory();
                break;
            case 2:
                factory = new BoatmanFactory();
                break;
            case 3:
                factory = new ShieldBearerFactory();
                break;
            case 4:
                return;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                continue;
        }

        if (factory) {
            createUnit(factory);
            delete factory;
            factory = nullptr;
        }
    }
}

void Game::cloneUnit() {
    if (army.empty()) {
        std::cout << "No units to clone.\n";
        return;
    }

    // For simplicity, clone the first unit in the army
    Soldiers* original = army[0];
    Soldiers* clone = original->clonis();
    army.push_back(clone);

    std::cout << "Unit cloned and added to the army.\n";
}

void Game::engageInBattle() {
    std::cout << "Engaging in battle...\n";
    for (auto& unit : army) {
        unit->engage();
    }
    std::cout << "Battle ended.\n";
}

void Game::saveState() {
   throw "Not yet implemented";
}

void Game::restoreState() {
    throw "Not yet implemented";
}

void Game::createUnit(SoldierFactory* factory) {
    Soldiers* unit = factory->createUnit();
    army.push_back(unit);
    std::cout << "Unit created and added to the army.\n";
}

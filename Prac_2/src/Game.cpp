#include "Game.h"
#include <iostream>

void Game::start() {
    int choice;
    CareTaker* caretaker = new CareTaker();
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
            case 5: // Undo/Restore state
                undo();
                break;
            case 6: // Redo state
                redo();
                return;
            case 7: // Exit
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
    std::cout << "5. Undo State\n";
    std::cout << "6. Redo State\n";
    std::cout << "7. Exit\n";
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
                //factory = new BoatmanFactory();
                break;
            case 3:
                // /factory = new ShieldBearerFactory();
                break;
            case 4:
                return;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                continue;
        }

        if (factory) {
            createUnit(factory);
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
    std::vector <Memento*> saveData;
    int i = 0;
    for (auto& unit : army){
        Memento* currentData = unit->militusMemento();
        currentData->setUniqueID(i);
        i++;
        saveData.push_back(currentData);
    }
        caretaker.batchSave(saveData);
}

void Game::undo() {
    std::vector <Memento*> saveData;
    for (auto& unit : army){
        Memento* currentData = unit->militusMemento();
        saveData.push_back(currentData);
    }

    std::vector <Memento*> undoData = caretaker.batchUndo(saveData);
    for (int i = 0; i < army.size(); i++){
        if (undoData[i] == nullptr){
            // means the unit does not have any more undo data, thus it should be deleted
            delete army[i];
            army.erase(army.begin() + i);
            continue;
        }
        Memento* currentData = army[i]->vivificaMemento(undoData[i]);
    }
}

void Game::redo() {
    //Restoring the state of the Army.
    //read the state of the Memento vector from the caretaker
    //iterate over the Memento vector and restore the state of each unit in the army
        //at each iteration
        //compare the name of the unit in Memento at i and the unit in the army at i
        //if the names are the same, restore the state of the unit in the army at i
        //if the names are different, create a new unit with the state of the Memento at i and add it to the army at that position
        //if the Memento at i is nullptr, means the unit does not have any more redo data, thus ignore it
    //continue until the end of the Memento vector

    std::vector <Memento*> saveData;

    for (auto& unit : army){
        Memento* currentData = unit->militusMemento();
        saveData.push_back(currentData);
    }

    std::vector <Memento*> redoData = caretaker.batchRedo(saveData);
    std::string mementoUnitName;
    std::string armyUnitName;

    for (int i = 0; i < redoData.size(); i++){
        mementoUnitName = redoData[i]->getUnitName();
        armyUnitName = army[i]->getUnitName();
        //if the names are the same, restore the state of the unit in the army at i
        if (mementoUnitName == armyUnitName){
            Memento* currentData = army[i]->vivificaMemento(redoData[i]);
        } 
        Memento* currentData = army[i]->vivificaMemento(redoData[i]);
    }    
}

void Game::createUnit(SoldierFactory* factory) {
    std::string name;
    int numSoldiers;
    std::cout << "\nUnit Name: ";
    std::cin >> name;
    std::cout << "\nNumber of soldiers in Unit: ";
    std::cin >> numSoldiers;
    Soldiers* unit = factory->createUnit(numSoldiers,name);
    army.push_back(unit);
}

#include "BoatmanFactory.h"
#include <iostream>

Soldiers* BoatmanFactory::createUnit(int numSoldiers, std::string name) {
	Soldiers* boatman = new Boatman(numSoldiers,name);
	return boatman;
}

int BoatmanFactory::calculateTotalHealthPerUnit() {
	std::cout<<"Calculating Boatman health"<<std::endl;
	return (getSoldiers()->getHealth() * getSoldiers()->getAmountOfSoldiers());
}

int BoatmanFactory::calculateTotalDamagePerUnit() {
	std::cout<<"Calculating Boatman health"<<std::endl;
	return (getSoldiers()->getDamage() * getSoldiers()->getAmountOfSoldiers());
}

int BoatmanFactory::calculateTotalDefencePerUnit() {
	std::cout<<"Calculating Boatman health"<<std::endl;
	return (getSoldiers()->getDefense() * getSoldiers()->getAmountOfSoldiers());
}

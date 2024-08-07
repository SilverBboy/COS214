#include "InfantryFactory.h"
#include <iostream>

Soldiers* InfantryFactory::createUnit(int numSoldiers, std::string name) {
	Soldiers* infantry = new Infantry(numSoldiers,name);
	return infantry;
}

int InfantryFactory::calculateTotalHealthPerUnit() {
	std::cout<<"Calculating infantry health"<<std::endl;
	return (getSoldiers()->getHealth() * getSoldiers()->getAmountOfSoldiers());
}

int InfantryFactory::calculateTotalDamagePerUnit() {
	std::cout<<"Calculating infantry damage"<<std::endl;
	return (getSoldiers()->getDamage() * getSoldiers()->getAmountOfSoldiers());
}

int InfantryFactory::calculateTotalDefencePerUnit() {
	std::cout<<"Calculating infantry defense"<<std::endl;
	return (getSoldiers()->getDefense() * getSoldiers()->getAmountOfSoldiers());
}

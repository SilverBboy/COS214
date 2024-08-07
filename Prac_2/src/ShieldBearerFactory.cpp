#include "ShieldBearerFactory.h"
#include <iostream>

Soldiers* ShieldBearerFactory::createUnit(int numSoldiers, std::string name) {
	Soldiers* shieldBearer = new ShieldBearer(numSoldiers,name);
	return shieldBearer;
}

int ShieldBearerFactory::calculateTotalHealthPerUnit() {
	std::cout<<"Calculating ShieldBearer health"<<std::endl;
	return (getSoldiers()->getHealth() * getSoldiers()->getAmountOfSoldiers());
}

int ShieldBearerFactory::calculateTotalDamagePerUnit() {
	std::cout<<"Calculating ShieldBearer damage"<<std::endl;
	return (getSoldiers()->getDamage() * getSoldiers()->getAmountOfSoldiers());
}

int ShieldBearerFactory::calculateTotalDefencePerUnit() {
	std::cout<<"Calculating ShieldBearer defense"<<std::endl;
	return (getSoldiers()->getDefense() * getSoldiers()->getAmountOfSoldiers());
}

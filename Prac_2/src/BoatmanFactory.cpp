#include "BoatmanFactory.h"
#include <iostream>

Soldiers* BoatmanFactory::createUnit(int numSoldiers, std::string name) {
	Soldiers* boatman = new Boatman(numSoldiers,name);
	return boatman;
}

int BoatmanFactory::calculateTotalHealthPerUnit() {
	// TODO - implement BoatmanFactory::calculateTotalHealthPerUnit
	throw "Not yet implemented";
}

int BoatmanFactory::calculateTotalDamagePerUnit() {
	// TODO - implement BoatmanFactory::calculateTotalDamagePerUnit
	throw "Not yet implemented";
}

int BoatmanFactory::calculateTotalDefencePerUnit() {
	// TODO - implement BoatmanFactory::calculateTotalDefencePerUnit
	throw "Not yet implemented";
}

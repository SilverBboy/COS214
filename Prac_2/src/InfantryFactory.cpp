#include "InfantryFactory.h"
#include "Infantry.h"


Soldiers* InfantryFactory::createUnit(int numSoldiers, std::string name) {
	Soldiers* infantry = new Infantry(numSoldiers,name);
	return infantry;
}

int InfantryFactory::calculateTotalHealthPerUnit() {
	// TODO - implement InfantryFactory::calculateTotalHealthPerUnit
	throw "Not yet implemented";

}

int InfantryFactory::calculateTotalDamagePerUnit() {
	// TODO - implement InfantryFactory::calculateTotalDamagePerUnit
	throw "Not yet implemented";
}

int InfantryFactory::calculateTotalDefencePerUnit() {
	// TODO - implement InfantryFactory::calculateTotalDefencePerUnit
	throw "Not yet implemented";
}

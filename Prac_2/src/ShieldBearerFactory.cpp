#include "ShieldBearerFactory.h"

Soldiers* ShieldBearerFactory::createUnit(int numSoldiers, std::string name) {
	Soldiers* shieldBearer = new ShieldBearer(numSoldiers,name);
	return shieldBearer;
}

int ShieldBearerFactory::calculateTotalHealthPerUnit() {
	// TODO - implement ShieldBearerFactory::calculateTotalHealthPerUnit
	throw "Not yet implemented";
}

int ShieldBearerFactory::calculateTotalDamagePerUnit() {
	// TODO - implement ShieldBearerFactory::calculateTotalDamagePerUnit
	throw "Not yet implemented";
}

int ShieldBearerFactory::calculateTotalDefencePerUnit() {
	// TODO - implement ShieldBearerFactory::calculateTotalDefencePerUnit
	throw "Not yet implemented";
}

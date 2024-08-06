#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include "SoldierFactory.h"
#include "Soldiers.h"
class BoatmanFactory : public SoldierFactory {


public:
	virtual Soldiers* createUnit(int numSoldiers, std::string name);

	virtual int calculateTotalHealthPerUnit();

	virtual int calculateTotalDamagePerUnit();

	virtual int calculateTotalDefencePerUnit();
};

#endif

#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H
#include "SoldierFactory.h"
#include "Soldiers.h"
class InfantryFactory : SoldierFactory {


public:
	virtual Soldiers* createUnit();

	virtual int calculateTotalHealthPerUnit();

	virtual int calculateTotalDamagePerUnit();

	virtual int calculateTotalDefencePerUnit();
};

#endif

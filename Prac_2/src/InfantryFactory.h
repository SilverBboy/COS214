#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H
#include "SoldierFactory.h"
#include "Soldiers.h"
#include <string>
class InfantryFactory : public SoldierFactory {


public:
	virtual Soldiers* createUnit(int numSoldiers, std::string name);

	virtual int calculateTotalHealthPerUnit();

	virtual int calculateTotalDamagePerUnit();

	virtual int calculateTotalDefencePerUnit();
};

#endif

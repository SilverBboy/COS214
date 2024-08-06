#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H
#include "SoldierFactory.h"
#include "Soldiers.h"
#include "ShieldBearer.h"
#include <string>

class ShieldBearerFactory : public SoldierFactory {


public:
	virtual Soldiers* createUnit(int numSoldiers, std::string name);

	virtual int calculateTotalHealthPerUnit();

	virtual int calculateTotalDamagePerUnit();

	virtual int calculateTotalDefencePerUnit();
};

#endif

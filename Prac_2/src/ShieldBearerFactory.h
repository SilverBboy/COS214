#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H
#include "SoldierFactory.h"

class ShieldBearerFactory : SoldierFactory {


public:
	virtual Soldiers* createUnit();

	virtual int calculateTotalHealthPerUnit();

	virtual int calculateTotalDamagePerUnit();

	virtual int calculateTotalDefencePerUnit();
};

#endif

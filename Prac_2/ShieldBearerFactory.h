#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

class ShieldBearerFactory : SoldierFactory {


public:
	virtual Soldiers* createUnit();

	virtual int calculateTotalHealthPerUnit();

	virtual int calculateTotalDamagePerUnit();

	virtual int calculateTotalDefencePerUnit();
};

#endif

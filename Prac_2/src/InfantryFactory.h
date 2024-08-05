#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

class InfantryFactory : SoldierFactory {


public:
	virtual Soldiers* createUnit();

	virtual int calculateTotalHealthPerUnit();

	virtual int calculateTotalDamagePerUnit();

	virtual int calculateTotalDefencePerUnit();
};

#endif

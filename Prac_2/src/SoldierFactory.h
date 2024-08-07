#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"
class SoldierFactory {

private:
	Soldiers* soldiers;

protected:
	virtual Soldiers* createUnit(int numSoldiers, std::string name) = 0;

	virtual int calculateTotalHealthPerUnit() = 0;

	virtual int calculateTotalDamagePerUnit() = 0;

	virtual int calculateTotalDefencePerUnit() = 0;

	Soldiers * getSoldiers();
	friend class Game;
};

#endif

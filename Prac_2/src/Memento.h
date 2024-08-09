#ifndef MEMENTO_H
#define MEMENTO_H
#include<string>
class Soldiers;

class Memento {
	friend class Soldiers;

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int amountOfSoldiersPerUnit;
	int defencePerSoldier;
	std::string unitName;
	std::string uniqueID;
// in order to avoid confusion with duplicate names, we could add another attribute, called uniqueID
//it will take the name and its index in the vector, so we can have multiple units with the same name
	Memento(int value1, int value2, int value3, int value4, std::string value5);

public:
	int getHealthPerSoldier();
	int getDamagePerSoldier();
	int getAmountOfSoldiersPerUnit();
	int getDefencePerSoldier();
	std::string getUnitName();
	std::string getUniqueID();
	void setUniqueID(int index);
};

#endif

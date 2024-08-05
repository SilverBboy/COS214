#ifndef MEMENTO_H
#define MEMENTO_H
#include<string>
class Memento {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int amountOfSoldiersPerUnit;
	int defencePerSoldier;
	std::string unitName;

	Memento(int value1, int value2, int value3, int value4, std::string value5);
};

#endif

#ifndef MEMENTO_H
#define MEMENTO_H

class Memento {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int amountOfSoldiersPerUnit;
	int defencePerSoldier;
	string unitName;

	Memento(int value1, int value2, int value3, int value4, string value5);
};

#endif

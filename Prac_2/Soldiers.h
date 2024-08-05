#ifndef SOLDIERS_H
#define SOLDIERS_H

class Soldiers {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int amountOfSoldiersPerUnit;
	int defencePerSoldier;
	string unitName;

public:
	virtual Soldiers* clonis() = 0;

	virtual void engage() = 0;

	virtual void disengage() = 0;

private:
	virtual void prepare() = 0;

	virtual void execute() = 0;

	virtual void retreat() = 0;

	virtual void rest() = 0;

public:
	Memento* militusMemento();

	Memento* militusMemento2(Memento* mem);
};

#endif

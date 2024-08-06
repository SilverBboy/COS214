#include "Soldiers.h"
Soldiers::Soldiers(int health, int damage, int defence, int numUnits, std::string name)
    : healthPerSoldier(health),
      damagePerSoldier(damage),
      defencePerSoldier(defence),
      amountOfSoldiersPerUnit(numUnits),
      unitName(name)
{

}
Memento* Soldiers::militusMemento() {
	// TODO - implement Soldiers::militusMemento
	throw "Not yet implemented";
}

Memento* Soldiers::militusMemento2(Memento* mem) {
	// TODO - implement Soldiers::militusMemento2
	throw "Not yet implemented";
}

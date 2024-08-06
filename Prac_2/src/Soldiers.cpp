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
	return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
}

Memento* Soldiers::vivificaMemento(Memento* mem) {
  // TODO - implement Soldiers::vivificaMemento
  throw "Not yet implemented";
}

#include "Memento.h"

Memento::Memento(int value1, int value2, int value3, int value4, std::string value5) {
	this->healthPerSoldier = value1;
	this->damagePerSoldier = value2;
	this->amountOfSoldiersPerUnit = value3;
	this->defencePerSoldier = value4;
	this->unitName = value5;
}

std::string Memento::getUnitName() {
	return this->unitName;
}
#include "Boatman.h"
#include <iostream>
Boatman::Boatman(int numSoldiers,std::string name) 
:Soldiers(100,50,10,numSoldiers,name)
{
	std::cout<<"You created the Boatman Unit '" <<name<< "' with " <<numSoldiers << " soldiers\n";
}
void Boatman::engage() {
	// TODO - implement Boatman::engage
	throw "Not yet implemented";
}

void Boatman::disengage() {
	// TODO - implement Boatman::disengage
	throw "Not yet implemented";
}
Soldiers* Boatman::clonis() {
    throw "Not yet implemented";
}

void Boatman::prepare() {
	// TODO - implement Boatman::prepare
	throw "Not yet implemented";
}

void Boatman::execute() {
	// TODO - implement Boatman::execute
	throw "Not yet implemented";
}

void Boatman::retreat() {
	// TODO - implement Boatman::retreat
	throw "Not yet implemented";
}

void Boatman::rest() {
	// TODO - implement Boatman::rest
	throw "Not yet implemented";
}

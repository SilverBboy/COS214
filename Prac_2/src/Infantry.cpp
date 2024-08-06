#include "Infantry.h"
#include <iostream>



Infantry::Infantry(int numSoldiers,std::string name) 
:Soldiers(100,50,10,numSoldiers,name)
{
	std::cout<<"You created the Infantry Unit '" <<name<< "' with " <<numSoldiers << " soldiers\n";
}
Infantry::~Infantry() {

}

// Implementations of virtual methods
Soldiers* Infantry::clonis() {
    throw "Not yet implemented";
}

void Infantry::engage() {
    throw "Not yet implemented";
}

void Infantry::disengage() {
    throw "Not yet implemented";
}

void Infantry::prepare() {
    throw "Not yet implemented";
}

void Infantry::execute() {
    	throw "Not yet implemented";

}

void Infantry::retreat() {
	throw "Not yet implemented";
}

void Infantry::rest() {
    throw "Not yet implemented";
}

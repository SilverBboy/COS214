#ifndef BOATMAN_H
#define BOATMAN_H

#include "Soldiers.h"
class Boatman : public Soldiers {


public:
	virtual Soldiers* clonis();

	virtual void engage();

	virtual void disengage();

private:
	virtual void prepare();

	virtual void execute();

	virtual void retreat();

	virtual void rest();
};

#endif

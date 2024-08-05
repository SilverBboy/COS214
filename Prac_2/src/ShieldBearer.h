#ifndef SHIELDBEARER_H
#define SHIELDBEARER_H
#include "Soldiers.h"
class ShieldBearer : public Soldiers {


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

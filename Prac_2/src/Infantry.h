#ifndef INFANTRY_H
#define INFANTRY_H
#include "Soldiers.h"
class Infantry : public Soldiers {


public:
	virtual Soldiers* clonis();

	virtual void engage();

	virtual void disengage();

private:
//needs a constructor to set basic values
	virtual void prepare();

	virtual void execute();

	virtual void retreat();

	virtual void rest();
};

#endif

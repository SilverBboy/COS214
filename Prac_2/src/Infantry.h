#ifndef INFANTRY_H
#define INFANTRY_H
#include "Soldiers.h"
#include <string>
class Infantry : public Soldiers {


public:
	Infantry(int numSoldiers,std::string name);

	virtual Soldiers* clonis();

	virtual void engage();

	virtual void disengage();

private:
//needs a constructor to set basic values
	virtual void prepare();

	virtual void execute();

	virtual void retreat();

	virtual void rest();

	virtual ~Infantry();
};

#endif

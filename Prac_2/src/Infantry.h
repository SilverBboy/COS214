#ifndef INFANTRY_H
#define INFANTRY_H

class Infantry : Soldiers {


public:
	virtual Soldiers* clonis() = 0;

	virtual void engage();

	virtual void disengage();

private:
	virtual void prepare();

	virtual void execute();

	virtual void retreat();

	virtual void rest();
};

#endif

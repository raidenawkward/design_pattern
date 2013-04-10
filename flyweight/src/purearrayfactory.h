#ifndef _PUREARRAYFACTORY_H
#define _PUREARRAYFACTORY_H

#include "array.h"
#include "purearray.h"

class PureArrayFactory {

public:
	PureArrayFactory(int range, int width, int height);
	virtual ~PureArrayFactory();

	virtual Array* getPureArray(int v);

private:
	Array** _arrays;
	int _range;
	int _width;
	int _height;
};

#endif // _PUREARRAYFACTORY_H


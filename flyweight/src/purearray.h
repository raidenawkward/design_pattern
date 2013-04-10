#ifndef _PUREARRAY_H
#define _PUREARRAY_H

#include "array.h"

class PureArray : public Array {

public:
	PureArray(int v, int w, int h);
	virtual ~PureArray();

private:
	void setValue(int v);
};

#endif // _PUREARRAY_H


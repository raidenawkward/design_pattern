#include "purearray.h"

PureArray::PureArray(int v, int w, int h)
	:Array(w, h)
{
	setValue(v);
}

PureArray::~PureArray()
{
}

void PureArray::setValue(int v)
{
	for (int i = 0; i < getHeight(); ++i) {
		for (int j = 0; j < getWidth(); ++j) {
			setData(v, j, i);
		}
	}
}

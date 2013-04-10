#include "purearrayfactory.h"
#include <stdlib.h>

PureArrayFactory::PureArrayFactory(int range, int w, int h)
	:_range(range)
	,_width(w)
	,_height(h)
{
	_arrays = new Array*[_range];

	for (int i = 0; i < _range; ++i) {
		_arrays[i] = NULL;
	}
}

PureArrayFactory::~PureArrayFactory()
{
	for (int i = 0; i < _range; ++i) {
		if (_arrays[i])
			delete _arrays[i];
	}

	delete[] _arrays;
}

Array* PureArrayFactory::getPureArray(int v)
{
	if (v < 0 || v >= _range)
		return NULL;

	if (_arrays[v] == NULL) {
		_arrays[v] = new PureArray(v, _width, _height);
	}

	return _arrays[v];
}

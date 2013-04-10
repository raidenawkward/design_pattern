#include "array.h"
#include <stdlib.h>
#include <stdio.h>

Array::Array(int width, int height)
	:_width(width)
	,_height(height)
{
	_data = new int*[_height];

	for (int i = 0; i < _height; ++i) {
		_data[i] = new int[_width];
	}
}

Array::~Array()
{
	for (int i = 0; i < _height; ++i) {
			delete[] _data[i];
	}

	delete[] _data;
}

bool Array::getData(int x, int y, int& res)
{
	if (x < 0 || x >= _width
		|| y < 0 || y >= _height)
		return false;

	res = _data[y][x];

	return true;
}

bool Array::setData(int v, int x, int y)
{

	if (x < 0 || x >= _width
		|| y < 0 || y >= _height)
		return false;

	_data[y][x] = v;

	return true;
}

void Array::printArray()
{
	for (int i = 0; i < getHeight(); ++i) {
		for (int j = 0; j < getWidth(); ++j) {
			printf("%4d", _data[i][j]);
		}
		printf("\n");
	}
}

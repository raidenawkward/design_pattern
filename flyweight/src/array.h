#ifndef _ARRAY_H
#define _ARRAY_H

class Array {

public:
	Array(int width, int height);
	virtual ~Array();

	int getWidth() { return _width; }
	int getHeight() { return _height; }

	virtual bool getData(int x, int y, int& res);
	virtual bool setData(int v, int x, int y);

	virtual void printArray();
private:
	int _width;
	int _height;
	int** _data;
};

#endif // _ARRAY_H


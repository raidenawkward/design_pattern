#ifndef _TOUPPERHASHSTRATEGY_H
#define _TOUPPERHASHSTRATEGY_H

#include "hashstrategy.h"

class ToUpperHashStrategy : public HashStrategy {

public:
	ToUpperHashStrategy();
	virtual ~ToUpperHashStrategy();

protected:
	virtual bool isInputValid(const char* str);
	virtual char* hash(const char* str);
};

#endif // _TOUPPERHASHSTRATEGY_H


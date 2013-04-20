#ifndef _SUMHASHSTRATEGY_H
#define _SUMHASHSTRATEGY_H

#include "hashstrategy.h"

class SumHashStrategy : public HashStrategy {

public:
	SumHashStrategy();
	virtual ~SumHashStrategy();

protected:
	virtual bool isInputValid(const char* str);
	virtual char* hash(const char* str);
};

#endif // _SUMHASHSTRATEGY_H


#ifndef _SUMHASHGENERATOR_H
#define _SUMHASHGENERATOR_H

#include "hashgenerator.h"

class SumHashGenerator : public HashGenerator {

public:
	SumHashGenerator();
	virtual ~SumHashGenerator();

	char* genHash(const char* src);

protected:
	virtual bool isInputValid(const char* src);
	virtual char* hash(const char* src);

};

#endif // _SUMHASHGENERATOR_H


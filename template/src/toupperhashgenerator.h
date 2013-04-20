#ifndef _TOUPPERHASHGENERATOR_H
#define _TOUPPERHASHGENERATOR_H

#include "hashgenerator.h"

class ToUpperHashGenerator : public HashGenerator {

public:
	ToUpperHashGenerator();
	virtual ~ToUpperHashGenerator();

	char* genHash(const char* src);

protected:
	virtual bool isInputValid(const char* src);
	virtual char* hash(const char* src);
};

#endif // _TOUPPERHASHGENERATOR_H


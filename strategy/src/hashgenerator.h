#ifndef _HASHGENERATOR_H
#define _HASHGENERATOR_H

#include "hashstrategy.h"

class HashGenerator {

public:
	HashGenerator(HashStrategy* stg);
	virtual ~HashGenerator();

	char* genHash(const char* str);
	void setStrategy(HashStrategy* stg) { _stg = stg; }
	HashStrategy* getStrategy() { return _stg; }

private:
	HashStrategy* _stg;
};

#endif // _HASHGENERATOR_H


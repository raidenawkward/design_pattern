#include "hashgenerator.h"
#include <stdlib.h>

HashGenerator::HashGenerator(HashStrategy* stg)
	:_stg(stg)
{
}

HashGenerator::~HashGenerator()
{
	if (_stg)
		delete _stg;
}

char* HashGenerator::genHash(const char* str)
{
	if (!_stg)
		return NULL;

	return _stg->genHash(str);
}

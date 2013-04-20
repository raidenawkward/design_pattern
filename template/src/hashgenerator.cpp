#include "hashgenerator.h"
#include <stdlib.h>

HashGenerator::HashGenerator()
{
}

HashGenerator::~HashGenerator()
{
}

char* HashGenerator::genHash(const char* src)
{
	if (!this->isInputValid(src))
		return NULL;

	return this->hash(src);
}

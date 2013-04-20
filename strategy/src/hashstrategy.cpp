#include "hashstrategy.h"
#include <stdlib.h>

HashStrategy::HashStrategy()
{
}

HashStrategy::~HashStrategy()
{
}

char* HashStrategy::genHash(const char* str)
{
	if (!isInputValid(str))
		return NULL;

	return hash(str);
}

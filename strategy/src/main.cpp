#include <stdio.h>
#include <stdlib.h>

#include "hashgenerator.h"
#include "hashstrategy.h"
#include "sumhashstrategy.h"
#include "toupperhashstrategy.h"


int main(int argc, char** argv)
{
	const char* origin = "abcde";

	HashStrategy* sumStg = new SumHashStrategy();
	HashStrategy* toUpperStg = new ToUpperHashStrategy();

	printf("original string: %s\n", origin);
	HashGenerator *gen = new HashGenerator(sumStg);
	printf("generate sum hash: %s\n", gen->genHash(origin));

	gen->setStrategy(toUpperStg);
	printf("generate to-upper hash: %s\n", gen->genHash(origin));

	return 0;
}

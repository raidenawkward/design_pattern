#include <stdio.h>
#include <stdlib.h>

#include "hashgenerator.h"
#include "sumhashgenerator.h"
#include "toupperhashgenerator.h"


int main(int argc, char** argv)
{
	const char* str = "abcde";
	HashGenerator *gen1 = new SumHashGenerator();
	HashGenerator *gen2 = new ToUpperHashGenerator();

	printf("ori str: %s\n", str);
	printf("sum hash for %s is: %s\n", str, gen1->genHash(str));
	printf("to-upper hash for %s is: %s\n", str, gen2->genHash(str));

	return 0;
}

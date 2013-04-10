#include <stdio.h>
#include <stdlib.h>

#include "array.h"
#include "purearrayfactory.h"


int main(int argc, char** argv)
{
	PureArrayFactory *factory = new PureArrayFactory(10, 7, 3);

	Array *a1 = factory->getPureArray(1);
	Array *a2 = factory->getPureArray(2);
	Array *a3 = factory->getPureArray(3);
	Array *a4 = factory->getPureArray(1);
	Array *a5 = factory->getPureArray(2);
	Array *a6 = factory->getPureArray(3);

	if (a1)
		a1->printArray();

	if (a2)
		a2->printArray();

	if (a3)
		a3->printArray();

	if (a4)
		a4->printArray();

	if (a5)
		a5->printArray();

	if (a6)
		a6->printArray();

	return 0;
}

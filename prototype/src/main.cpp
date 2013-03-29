#include <stdio.h>
#include <stdlib.h>

#include "prototype.h"
#include "concreteprototype.h"


int main(int argc, char** argv)
{
	Prototype* p = new ConcretePrototype();
	Prototype* p1 = p->clone();

	return 0;
}

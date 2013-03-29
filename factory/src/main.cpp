#include <stdio.h>
#include <stdlib.h>

#include "factory.h"
#include "product.h"
#include "concretefactory.h"
#include "concreteproduct.h"


int main(int argc, char** argv)
{
	Factory* factory = new ConcreteFactory();
	Product* p = factory->createProduct();

	delete factory;
	delete p;

	return 0;
}

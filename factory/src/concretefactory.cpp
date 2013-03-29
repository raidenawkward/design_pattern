#include "concretefactory.h"
#include "concreteproduct.h"

#include <stdio.h>
#include <stdlib.h>

ConcreteFactory::ConcreteFactory()
{
	printf("[FUNCTION CALLED] %s\n", __FUNCTION__);
}

ConcreteFactory::~ConcreteFactory()
{
	printf("[FUNCTION CALLED] %s\n", __FUNCTION__);
}

Product* ConcreteFactory::createProduct()
{
	return new ConcreteProduct();
}

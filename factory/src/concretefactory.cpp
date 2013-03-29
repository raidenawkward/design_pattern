#include "concretefactory.h"
#include "concreteproduct.h"
#include "log.h"

ConcreteFactory::ConcreteFactory()
{
	D_F_ENTRY;
}

ConcreteFactory::~ConcreteFactory()
{
	D_F_ENTRY;
}

Product* ConcreteFactory::createProduct()
{
	return new ConcreteProduct();
}

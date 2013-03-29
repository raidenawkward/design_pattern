#ifndef _CONCRETEFACTORY_H
#define _CONCRETEFACTORY_H

#include "factory.h"
#include "product.h"
#include "concreteproduct.h"

class ConcreteFactory : public Factory {

public:
	ConcreteFactory();
	~ConcreteFactory();

	Product* createProduct();
};

#endif // _CONCRETEFACTORY_H


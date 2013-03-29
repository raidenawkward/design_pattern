#ifndef _FACTORY_H
#define _FACTORY_H

#include "product.h"


class Factory {

public:
	virtual ~Factory() = 0;
	virtual Product* createProduct() = 0;

protected:
	Factory();
};

#endif // _FACTORY_H


#ifndef _ABSPRINTERFACTORY_H
#define _ABSPRINTERFACTORY_H

#include "absfloatprinterproduct.h"
#include "abscharprinterproduct.h"

class AbsPrinterFactory {

public:
	AbsPrinterFactory();
	virtual ~AbsPrinterFactory();

	virtual AbsFloatPrinterProduct* createFloatProduct() = 0;
	virtual AbsCharPrinterProduct* createCharProduct() = 0;
};

#endif // _ABSPRINTERFACTORY_H


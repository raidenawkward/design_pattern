#ifndef _ABSNEGATIVELOWERPRINTERFACTORY_H
#define _ABSNEGATIVELOWERPRINTERFACTORY_H

#include "absprinterfactory.h"
#include "absfloatprinterproduct.h"
#include "abscharprinterproduct.h"
#include "lowerprinter.h"
#include "negativenumprinter.h"


class AbsNegativeLowerPrinterFactory : public AbsPrinterFactory {

public:
	AbsNegativeLowerPrinterFactory();
	virtual ~AbsNegativeLowerPrinterFactory();

	AbsFloatPrinterProduct* createFloatProduct();
	AbsCharPrinterProduct* createCharProduct();
};

#endif // _ABSNEGATIVELOWERPRINTERFACTORY_H


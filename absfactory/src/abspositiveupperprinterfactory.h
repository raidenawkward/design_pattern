#ifndef _ABSPOSITIVEUPPERPRINTERFACTORY_H
#define _ABSPOSITIVEUPPERPRINTERFACTORY_H

#include "absprinterfactory.h"
#include "absfloatprinterproduct.h"
#include "abscharprinterproduct.h"
#include "upperprinter.h"
#include "positivenumprinter.h"

class AbsPositiveUpperPrinterFactory : public AbsPrinterFactory {

public:
	AbsPositiveUpperPrinterFactory();
	virtual ~AbsPositiveUpperPrinterFactory();

	AbsFloatPrinterProduct* createFloatProduct();
	AbsCharPrinterProduct* createCharProduct();
};

#endif // _ABSPOSITIVEUPPERPRINTERFACTORY_H


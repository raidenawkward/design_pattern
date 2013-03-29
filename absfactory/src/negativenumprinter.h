#ifndef _NEGATIVENUMPRINTER_H
#define _NEGATIVENUMPRINTER_H

#include "absfloatprinterproduct.h"

class NegativeNumPrinter : public AbsFloatPrinterProduct {

public:
	NegativeNumPrinter();
	virtual ~NegativeNumPrinter();

	void printFloatMessage();
};

#endif // _NEGATIVENUMPRINTER_H


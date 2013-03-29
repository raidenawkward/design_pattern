#ifndef _LOWERPRINTER_H
#define _LOWERPRINTER_H

#include "abscharprinterproduct.h"

class LowerPrinter : public AbsCharPrinterProduct {

public:
	LowerPrinter();
	virtual ~LowerPrinter();

	void printCharMessage();
};

#endif // _LOWERPRINTER_H


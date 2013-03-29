#ifndef _UPPERPRINTER_H
#define _UPPERPRINTER_H

#include "abscharprinterproduct.h"

class UpperPrinter : public AbsCharPrinterProduct {

public:
	UpperPrinter();
	virtual ~UpperPrinter();

	void printCharMessage();
};

#endif // _UPPERPRINTER_H


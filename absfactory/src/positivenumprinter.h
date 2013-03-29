#ifndef _POSITIVENUMPRINTER_H
#define _POSITIVENUMPRINTER_H

#include "absfloatprinterproduct.h"


class PositiveNumPrinter : public AbsFloatPrinterProduct {

public:
	PositiveNumPrinter();
	virtual ~PositiveNumPrinter();

	void printFloatMessage();
};

#endif // _POSITIVENUMPRINTER_H


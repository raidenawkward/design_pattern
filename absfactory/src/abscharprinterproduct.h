#ifndef _ABSCHARPRINTERPRODUCT_H
#define _ABSCHARPRINTERPRODUCT_H

class AbsCharPrinterProduct {

public:
	AbsCharPrinterProduct();
	virtual ~AbsCharPrinterProduct();

	virtual void printCharMessage() = 0;
};

#endif // _ABSCHARPRINTERPRODUCT_H


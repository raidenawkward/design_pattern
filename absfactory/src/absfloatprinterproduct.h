#ifndef _ABSFLOATPRINTERPRODUCT_H
#define _ABSFLOATPRINTERPRODUCT_H

class AbsFloatPrinterProduct {

public:
	AbsFloatPrinterProduct();
	virtual ~AbsFloatPrinterProduct();

	virtual void printFloatMessage() = 0;
};

#endif // _ABSFLOATPRINTERPRODUCT_H


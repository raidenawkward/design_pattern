#include <stdio.h>
#include <stdlib.h>

#include "absprinterfactory.h"
#include "abspositiveupperprinterfactory.h"
#include "absnegativelowerprinterfactory.h"
#include "absfloatprinterproduct.h"
#include "abscharprinterproduct.h"

int main(int argc, char** argv)
{
	AbsPrinterFactory *positiveUpperFactory = new AbsPositiveUpperPrinterFactory();
	AbsPrinterFactory *negativeLowerFactory = new AbsNegativeLowerPrinterFactory();

	AbsFloatPrinterProduct *p1 = positiveUpperFactory->createFloatProduct();
	AbsCharPrinterProduct *p2 = positiveUpperFactory->createCharProduct();

	AbsFloatPrinterProduct *p3 = negativeLowerFactory->createFloatProduct();
	AbsCharPrinterProduct *p4 = negativeLowerFactory->createCharProduct();

	p1->printFloatMessage();
	p2->printCharMessage();
	p3->printFloatMessage();
	p4->printCharMessage();

	return 0;
}

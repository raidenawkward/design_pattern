#include "abspositiveupperprinterfactory.h"

AbsPositiveUpperPrinterFactory::AbsPositiveUpperPrinterFactory()
{
}

AbsPositiveUpperPrinterFactory::~AbsPositiveUpperPrinterFactory()
{
}

AbsFloatPrinterProduct* AbsPositiveUpperPrinterFactory::createFloatProduct()
{
	return new PositiveNumPrinter();
}

AbsCharPrinterProduct* AbsPositiveUpperPrinterFactory::createCharProduct()
{
	return new UpperPrinter();
}

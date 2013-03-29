#include "absnegativelowerprinterfactory.h"

AbsNegativeLowerPrinterFactory::AbsNegativeLowerPrinterFactory()
{
}

AbsNegativeLowerPrinterFactory::~AbsNegativeLowerPrinterFactory()
{
}

AbsFloatPrinterProduct* AbsNegativeLowerPrinterFactory::createFloatProduct()
{
	return new NegativeNumPrinter();
}

AbsCharPrinterProduct* AbsNegativeLowerPrinterFactory::createCharProduct()
{
	return new LowerPrinter();
}

#include "greetingadaptercompositestyle.h"

GreetingAdapterCompositeStyle::GreetingAdapterCompositeStyle(ColorPrinter* printer)
	:_printer(printer)
{
}

GreetingAdapterCompositeStyle::~GreetingAdapterCompositeStyle()
{
}

void GreetingAdapterCompositeStyle::greeting()
{
	if (!_printer)
		return;

	const char* greeting = this->generate();
	_printer->print(greeting);
}

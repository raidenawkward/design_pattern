#include <stdio.h>
#include <stdlib.h>

#include "greetingadapterclassstyle.h"
#include "greetingadaptercompositestyle.h"
#include "colorprinter.h"


int main(int argc, char** argv)
{
	GreetingAdapterClassStyle *adapter1 = new GreetingAdapterClassStyle();
	adapter1->greeting();

	ColorPrinter *printer = new ColorPrinter();
	printer->setColor(COLOR_GREEN);
	GreetingAdapterCompositeStyle *adapter2 = new GreetingAdapterCompositeStyle(printer);

	adapter2->greeting();

	return 0;
}

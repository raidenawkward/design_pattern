#include <stdio.h>
#include <stdlib.h>

#include "datetimeprinter.h"


int main(int argc, char** argv)
{
	DateTimePrinter *printer = new DateTimePrinter();

	printer->print();

	delete printer;

	return 0;
}

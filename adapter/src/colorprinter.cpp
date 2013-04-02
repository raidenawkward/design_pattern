#include "colorprinter.h"
#include <stdio.h>

ColorPrinter::ColorPrinter()
	:_color(COLOR_WHITE)
{
}

ColorPrinter::~ColorPrinter()
{
}

void ColorPrinter::setColor(Color c)
{
	_color = c;
}

void ColorPrinter::print(const char* str)
{
	if (!str)
		return;

	printf("\033[40;%dm%s\033[0m\n", (int)_color, str);
}

#include "section.h"
#include <string.h>

Section::Section()
{
	memset(_text, 0x00, sizeof(_text));
}

Section::~Section()
{
}

void Section::setText(const char* text)
{
	if (!text)
		return;

	strcpy(_text, text);
}

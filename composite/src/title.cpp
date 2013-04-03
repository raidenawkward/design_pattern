#include "title.h"
#include <stdio.h>

Title::Title()
{
}

Title::~Title()
{
}

void Title::print()
{
	printf("\033[40;34m[TITLE]%s\033[0m\n", _text);
}

void Title::appendSector(Paragraph*)
{
}

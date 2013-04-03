#include "paragraph.h"
#include <stdio.h>

Paragraph::Paragraph()
{
}

Paragraph::~Paragraph()
{
}

void Paragraph::print()
{
	printf("%s\n", _text);

	vector<Paragraph*>::iterator iter = _sections.begin();
	for (; iter != _sections.end(); ++iter) {
		if (*iter)
			(*iter)->print();
	}
}

void Paragraph::appendSector(Paragraph* s)
{
	_sections.push_back(s);
}

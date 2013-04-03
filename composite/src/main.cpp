#include <stdio.h>
#include <stdlib.h>

#include "section.h"
#include "paragraph.h"
#include "subparagraph.h"
#include "title.h"
#include <stdio.h>
#include <string.h>


int main(int argc, char** argv)
{
	Paragraph* title = new Title();
	title->setText("Test Document");

	Paragraph *root = new Paragraph();
	root->setText("...this is a document in composite");

	root->appendSector(title);
	Paragraph** list = new Paragraph*[10];
	for (int i = 0; i < 10; ++i) {
		char text[128];
		memset(text, 0x00, sizeof(text));
		sprintf(text, "this is paragraph %d", i + 1);

		list[i] = new Paragraph();
		list[i]->setText(text);
		root->appendSector(list[i]);
	}

	Paragraph** subList = new Paragraph*[3];
	for (int i = 0; i < 3; ++i) {
		char text[128];
		memset(text, 0x00, sizeof(text));
		sprintf(text, "\tsub-paragraph %d", i + 1);

		subList[i] = new Paragraph();
		subList[i]->setText(text);
		list[0]->appendSector(subList[i]);
	}

	root->print();

	return 0;
}

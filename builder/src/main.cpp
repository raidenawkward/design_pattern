#include <stdio.h>
#include <stdlib.h>

#include "docbuilder.h"
#include "doc.h"
#include "designpatternbuilder.h"
#include "designpatterndirector.h"


int main(int argc, char** argv)
{
	DocBuilder *builder = new DesignPatternBuilder();
	DesignPatternDirector *director = new DesignPatternDirector(builder);

	director->construct();
	Doc *doc = builder->getDoc();

	if (doc)
		doc->printDoc();

	return 0;
}

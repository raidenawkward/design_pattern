#include "designpatternbuilder.h"
#include <stdlib.h>


DesignPatternBuilder::DesignPatternBuilder()
					:_doc(NULL)
{
}

DesignPatternBuilder::~DesignPatternBuilder()
{
}

void DesignPatternBuilder::buildTitle(const char* title)
{
	if (!_doc)
		_doc = new Doc();

	_doc->setTitle(title);
}

void DesignPatternBuilder::buildBody(const char* body)
{
	if (!_doc)
		_doc = new Doc();

	_doc->setBody(body);
}

void DesignPatternBuilder::buildAuthor(const char* author)
{
	if (!_doc)
		_doc = new Doc();

	_doc->setAuthor(author);
}

Doc* DesignPatternBuilder::getDoc()
{
	Doc* res = _doc;
	_doc = NULL;

	return res;
}

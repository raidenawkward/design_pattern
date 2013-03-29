#include "designpatterndirector.h"

#define DOC_TITLE "design pattern"
#define DOC_BODY "i have to learn"
#define DOC_AUTHOR "by tome.huang"

DesignPatternDirector::DesignPatternDirector(DocBuilder* builder)
					:_builder(builder)
{
}

DesignPatternDirector::~DesignPatternDirector()
{
}

void DesignPatternDirector::construct()
{
	if (!_builder)
		return;

	_builder->buildTitle(DOC_TITLE);
	_builder->buildBody(DOC_BODY);
	_builder->buildAuthor(DOC_AUTHOR);
}

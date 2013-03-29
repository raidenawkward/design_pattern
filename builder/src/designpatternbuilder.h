#ifndef _DESIGNPATTERNBUILDER_H
#define _DESIGNPATTERNBUILDER_H

#include "docbuilder.h"

class DesignPatternBuilder : public DocBuilder {

public:
	DesignPatternBuilder();
	virtual ~DesignPatternBuilder();

	virtual void buildTitle(const char* title);
	virtual void buildBody(const char* body);
	virtual void buildAuthor(const char* author);
	virtual Doc* getDoc();

private:
	Doc* _doc;
};

#endif // _DESIGNPATTERNBUILDER_H


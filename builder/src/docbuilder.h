#ifndef _DOCBUILDER_H
#define _DOCBUILDER_H

#include "doc.h"

class DocBuilder {

public:
	DocBuilder();
	virtual ~DocBuilder();

	virtual void buildTitle(const char* title) = 0;
	virtual void buildBody(const char* body) = 0;
	virtual void buildAuthor(const char* author) = 0;

	virtual Doc* getDoc() = 0;
};

#endif // _DOCBUILDER_H


#ifndef _DESIGNPATTERNDIRECTOR_H
#define _DESIGNPATTERNDIRECTOR_H

#include "docbuilder.h"

class DesignPatternDirector {

public:
	DesignPatternDirector(DocBuilder* builder);
	virtual ~DesignPatternDirector();

	void construct();

private:
	DocBuilder* _builder;
};

#endif // _DESIGNPATTERNDIRECTOR_H


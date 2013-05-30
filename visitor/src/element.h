#ifndef _ELEMENT_H
#define _ELEMENT_H

class Visitor;

class Element {

public:
	virtual void accept(Visitor* v) = 0;
};

#endif // _ELEMENT_H


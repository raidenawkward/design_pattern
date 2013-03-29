#ifndef _CONCRETEPROTOTYPE_H
#define _CONCRETEPROTOTYPE_H

#include "prototype.h"


class ConcretePrototype : public Prototype {

public:
	ConcretePrototype();
	ConcretePrototype(const ConcretePrototype& cp);

	virtual ~ConcretePrototype();

	Prototype* clone() const;
};

#endif // _CONCRETEPROTOTYPE_H


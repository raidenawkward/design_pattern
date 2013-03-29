#include "concreteprototype.h"
#include "log.h"

ConcretePrototype::ConcretePrototype()
{
	D_F_ENTRY;
}

ConcretePrototype::ConcretePrototype(const ConcretePrototype& cp)
{
	D_F_ENTRY;
}

ConcretePrototype::~ConcretePrototype()
{
	D_F_ENTRY;
}

Prototype* ConcretePrototype::clone() const
{
	D_F_ENTRY;
	return new ConcretePrototype(*this);
}

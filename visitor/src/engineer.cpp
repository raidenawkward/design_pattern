#include "engineer.h"

Engineer::Engineer(float salary, int vacation)
	: _salary(salary), _vacation(vacation)
{
}

Engineer::~Engineer()
{
}

void Engineer::accept(Visitor* v)
{
	if (v)
		v->visitEngineer(this);
}

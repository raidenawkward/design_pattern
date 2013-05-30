#include "manager.h"

Manager::Manager(float salary, int vacation)
	: _salary(salary), _vacation(vacation)
{
}

Manager::~Manager()
{
}

void Manager::accept(Visitor* v)
{
	if (v)
		v->visitManager(this);
}

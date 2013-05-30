#include "handle.h"
#include <stdio.h>


Handle::Handle()
{
	_successor = NULL;
}

Handle::Handle(Handle* s)
{
	_successor = s;
}


Handle::~Handle()
{
}

#include "eventhandle.h"

EventHandle::EventHandle()
{
}

EventHandle::EventHandle(EventHandle* s)
	: Handle(s)
{
}


EventHandle::~EventHandle()
{
}

bool EventHandle::onHandleEvent(Event* e)
{
	EventHandle* s = (EventHandle*)getSuccessor();
	if (!s)
		return false;
	else
		return s->onHandleEvent(e);
}

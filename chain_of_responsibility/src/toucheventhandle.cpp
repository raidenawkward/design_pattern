#include "toucheventhandle.h"
#include <iostream>

using namespace std;

TouchEventHandle::TouchEventHandle()
{
}

TouchEventHandle::TouchEventHandle(EventHandle* s)
	: EventHandle(s)
{
}

TouchEventHandle::~TouchEventHandle()
{
}

bool TouchEventHandle::onHandleEvent(Event* e)
{
	if (!e)
		return false;

	switch (e->getType()) {
	case Event::TYPE_TOUCH:
		cout<<"[TOUCH] handling touch event"<<endl;
		return true;
	default:
		break;
	}

	return EventHandle::onHandleEvent(e);
}

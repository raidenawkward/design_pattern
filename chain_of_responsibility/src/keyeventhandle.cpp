#include "keyeventhandle.h"
#include <iostream>

using namespace std;

KeyEventHandle::KeyEventHandle()
{
}

KeyEventHandle::KeyEventHandle(EventHandle* s)
	: EventHandle(s)
{
}

KeyEventHandle::~KeyEventHandle()
{
}

bool KeyEventHandle::onHandleEvent(Event* e)
{
	if (!e)
		return false;

	switch (e->getType()) {
	case Event::TYPE_KEY:
		cout<<"[KEY] handling key event"<<endl;
		return true;
	default:
		break;
	}

	return EventHandle::onHandleEvent(e);
}

#include <stdio.h>
#include <stdlib.h>

#include "handle.h"
#include "eventhandle.h"
#include "keyeventhandle.h"
#include "toucheventhandle.h"
#include "event.h"


int main(int argc, char** argv)
{
	Event* ekey = new Event(Event::TYPE_KEY);
	Event* etouch = new Event(Event::TYPE_TOUCH);
	Event* eunknown = new Event();

	EventHandle* keyHandle = new KeyEventHandle();
	EventHandle* touchHandle = new TouchEventHandle();

	keyHandle->setSuccessor(touchHandle);


	printf("case keyHandle:\n");
	keyHandle->onHandleEvent(ekey);
	keyHandle->onHandleEvent(etouch);
	keyHandle->onHandleEvent(eunknown);

	printf("case touchHandle:\n");
	touchHandle->onHandleEvent(ekey);
	touchHandle->onHandleEvent(etouch);
	touchHandle->onHandleEvent(eunknown);

	delete ekey;
	delete etouch;
	delete eunknown;

	delete keyHandle;
	delete touchHandle;

	return 0;
}

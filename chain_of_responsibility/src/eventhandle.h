#ifndef _EVENTHANDLE_H
#define _EVENTHANDLE_H

#include "handle.h"
#include "event.h"

class EventHandle : public Handle {

public:
	virtual ~EventHandle();


	virtual bool onHandleEvent(Event* e);

protected:
	EventHandle();
	EventHandle(EventHandle* s);
};

#endif // _EVENTHANDLE_H


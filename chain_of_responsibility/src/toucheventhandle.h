#ifndef _TOUCHEVENTHANDLE_H
#define _TOUCHEVENTHANDLE_H

#include "eventhandle.h"

class TouchEventHandle : public EventHandle {

public:
	TouchEventHandle();
	TouchEventHandle(EventHandle* s);

	virtual ~TouchEventHandle();

	virtual bool onHandleEvent(Event* e);
};

#endif // _TOUCHEVENTHANDLE_H


#ifndef _KEYEVENTHANDLE_H
#define _KEYEVENTHANDLE_H

#include "eventhandle.h"

class KeyEventHandle : public EventHandle {

public:
	KeyEventHandle();
	KeyEventHandle(EventHandle* s);

	virtual ~KeyEventHandle();

	virtual bool onHandleEvent(Event* e);
};

#endif // _KEYEVENTHANDLE_H


#ifndef _HELLOMESSAGEIMPL_H
#define _HELLOMESSAGEIMPL_H

#include "absmessageimpl.h"

class HelloMessageImpl : public AbsMessageImpl {

public:
	HelloMessageImpl();
	virtual ~HelloMessageImpl();

	virtual void sendMessage();
};

#endif // _HELLOMESSAGEIMPL_H


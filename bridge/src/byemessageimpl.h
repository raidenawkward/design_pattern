#ifndef _BYEMESSAGEIMPL_H
#define _BYEMESSAGEIMPL_H

#include "absmessageimpl.h"

class ByeMessageImpl : public AbsMessageImpl {

public:
	ByeMessageImpl();
	virtual ~ByeMessageImpl();

	virtual void sendMessage();
};

#endif // _BYEMESSAGEIMPL_H


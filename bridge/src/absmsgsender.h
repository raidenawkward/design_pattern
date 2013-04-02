#ifndef _ABSMSGSENDER_H
#define _ABSMSGSENDER_H

#include "absmessageimpl.h"

class AbsMsgSender {

public:
	virtual ~AbsMsgSender();

	virtual void sendMessage() = 0;
	virtual void setMessage(AbsMessageImpl* impl) = 0;

protected:
	AbsMsgSender();
};

#endif // _ABSMSGSENDER_H


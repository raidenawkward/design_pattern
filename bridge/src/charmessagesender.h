#ifndef _CHARMESSAGESENDER_H
#define _CHARMESSAGESENDER_H

#include "absmsgsender.h"
#include "absmessageimpl.h"

class CharMessageSender : public AbsMsgSender {

public:
	CharMessageSender();
	virtual ~CharMessageSender();

	virtual void sendMessage();

	void setMessage(AbsMessageImpl* impl);

protected:
	AbsMessageImpl* _impl;
};

#endif // _CHARMESSAGESENDER_H


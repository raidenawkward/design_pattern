#include "charmessagesender.h"
#include <stdlib.h>

CharMessageSender::CharMessageSender()
				:_impl(NULL)
{
}

CharMessageSender::~CharMessageSender()
{
}

void CharMessageSender::sendMessage()
{
	if (_impl)
		_impl->sendMessage();
}

void CharMessageSender::setMessage(AbsMessageImpl* impl)
{
	_impl = impl;
}

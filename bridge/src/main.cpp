#include <stdio.h>
#include <stdlib.h>

#include "absmsgsender.h"
#include "charmessagesender.h"
#include "absmessageimpl.h"
#include "hellomessageimpl.h"
#include "byemessageimpl.h"


int main(int argc, char** argv)
{
	AbsMsgSender *sender = new CharMessageSender();

	AbsMessageImpl *hello = new HelloMessageImpl();
	AbsMessageImpl *bye = new ByeMessageImpl();

	sender->setMessage(hello);
	sender->sendMessage();

	sender->setMessage(bye);
	sender->sendMessage();

	delete sender;
	delete hello;
	delete bye;

	return 0;
}

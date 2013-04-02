#ifndef _ABSMESSAGEIMPL_H
#define _ABSMESSAGEIMPL_H

class AbsMessageImpl {

public:
	virtual ~AbsMessageImpl();

	virtual void sendMessage() = 0;

protected:
	AbsMessageImpl();
};

#endif // _ABSMESSAGEIMPL_H


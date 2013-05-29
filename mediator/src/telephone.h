#ifndef _TELEPHONE_H
#define _TELEPHONE_H

#include "telephonemediator.h"

class TelephoneMediator;

class Telephone {

public:
	Telephone(int phoneNum, TelephoneMediator* m);
	virtual ~Telephone();

	virtual void dial(int phoneNum);

	int getNum() const { return _phoneNum; }

protected:
	friend class TelephoneMediator;
	virtual void onCallReceive(int incommingNum);

private:
	int _phoneNum;
	TelephoneMediator* _mediator;
};

#endif // _TELEPHONE_H


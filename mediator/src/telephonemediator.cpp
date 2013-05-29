#include "telephonemediator.h"

TelephoneMediator::TelephoneMediator()
{
}

TelephoneMediator::~TelephoneMediator()
{
}

void TelephoneMediator::add(Telephone* t)
{
	_phones.push_back(t);
}

void TelephoneMediator::dialTo(Telephone* from, int num)
{
	for (int i = 0; i < _phones.size(); ++i) {
		if (_phones[i]->getNum() == num)
			_phones[i]->onCallReceive(from->getNum());
	}
}

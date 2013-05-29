#include "telephone.h"
#include <iostream>

using namespace std;

Telephone::Telephone(int phoneNum, TelephoneMediator* m)
{
	_phoneNum = phoneNum;
	_mediator = m;
	_mediator->add(this);
}

Telephone::~Telephone()
{
}

void Telephone::dial(int num)
{
	cout<<"phone("<<_phoneNum<<") calling "<<num<<endl;
	_mediator->dialTo(this, num);
}

void Telephone::onCallReceive(int num)
{
	cout<<"phone("<<_phoneNum<<") incomming call from "<<num<<endl;
}

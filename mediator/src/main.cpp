#include <stdio.h>
#include <stdlib.h>

#include "telephone.h"
#include "telephonemediator.h"


int main(int argc, char** argv)
{
	TelephoneMediator* mediator = new TelephoneMediator();

	Telephone* p1 = new Telephone(111, mediator);
	Telephone* p2 = new Telephone(222, mediator);

	p1->dial(222);
	p2->dial(111);

	delete p1;
	delete p2;
	delete mediator;

	return 0;
}

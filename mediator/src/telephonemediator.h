#ifndef _TELEPHONEMEDIATOR_H
#define _TELEPHONEMEDIATOR_H

#include "telephone.h"
#include <vector>

using namespace std;

class Telephone;

class TelephoneMediator {

public:
	TelephoneMediator();
	virtual ~TelephoneMediator();

	void add(Telephone* t);
	void dialTo(Telephone* t, int num);

private:
	vector<Telephone*> _phones;
};

#endif // _TELEPHONEMEDIATOR_H


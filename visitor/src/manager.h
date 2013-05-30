#ifndef _MANAGER_H
#define _MANAGER_H

#include "element.h"
#include "visitor.h"

class Manager : public Element {

public:
	Manager(float salary, int vacation);
	virtual ~Manager();

	float getSalary() { return _salary; }
	int getVacation() { return _vacation; }

	virtual void accept(Visitor* v);

private:
	float _salary;
	int _vacation;
};

#endif // _MANAGER_H


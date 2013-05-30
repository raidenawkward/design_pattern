#ifndef _ENGINEER_H
#define _ENGINEER_H

#include "element.h"
#include "visitor.h"

class Engineer : public Element {

public:
	Engineer(float salary, int vacation);
	virtual ~Engineer();

	float getSalary() { return _salary; }
	int getVacation() { return _vacation; }

	virtual void accept(Visitor* v);

private:
	float _salary;
	int _vacation;
};

#endif // _ENGINEER_H


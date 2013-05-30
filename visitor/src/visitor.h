#ifndef _VISITOR_H
#define _VISITOR_H

#include "engineer.h"
#include "manager.h"

class Engineer;
class Manager;

class Visitor {

public:
	Visitor();
	virtual ~Visitor();

	virtual void visitEngineer(Engineer* e) = 0;
	virtual void visitManager(Manager* e) = 0;
};

#endif // _VISITOR_H


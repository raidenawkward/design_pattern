#ifndef _SALARYVISITOR_H
#define _SALARYVISITOR_H

#include "visitor.h"
#include "engineer.h"
#include "manager.h"


class SalaryVisitor : public Visitor {

public:
	SalaryVisitor();
	virtual ~SalaryVisitor();

	virtual void visitEngineer(Engineer* e);
	virtual void visitManager(Manager* e);
};

#endif // _SALARYVISITOR_H


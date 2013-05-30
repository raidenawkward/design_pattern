#ifndef _VACATIONVISITOR_H
#define _VACATIONVISITOR_H

#include "visitor.h"
#include "engineer.h"
#include "manager.h"


class VacationVisitor : public Visitor {

public:
	VacationVisitor();
	virtual ~VacationVisitor();

	virtual void visitEngineer(Engineer* e);
	virtual void visitManager(Manager* e);
};

#endif // _VACATIONVISITOR_H


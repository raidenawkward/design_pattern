#include <stdio.h>
#include <stdlib.h>

#include "element.h"
#include "visitor.h"
#include "salaryvisitor.h"
#include "vacationvisitor.h"
#include "engineer.h"
#include "manager.h"


int main(int argc, char** argv)
{
	Element* engineer = new Engineer(10000, 5);
	Element* manager = new Manager(20000, 7);

	Visitor* salaryVisitor = new SalaryVisitor();
	Visitor* vacationVisitor = new VacationVisitor();

	engineer->accept(salaryVisitor);
	manager->accept(salaryVisitor);

	engineer->accept(vacationVisitor);
	manager->accept(vacationVisitor);

	delete engineer;
	delete manager;
	delete salaryVisitor;
	delete vacationVisitor;

	return 0;
}

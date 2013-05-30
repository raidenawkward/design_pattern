#include "vacationvisitor.h"
#include <iostream>

using namespace std;

VacationVisitor::VacationVisitor()
{
}

VacationVisitor::~VacationVisitor()
{
}

void VacationVisitor::visitEngineer(Engineer* e)
{
	cout<<"[Engineer] vacation: "<<e->getVacation()<<endl;
}

void VacationVisitor::visitManager(Manager* e)
{
	cout<<"[Manager] vacation: "<<e->getVacation()<<endl;
}

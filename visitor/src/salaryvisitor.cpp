#include "salaryvisitor.h"
#include <iostream>

using namespace std;

SalaryVisitor::SalaryVisitor()
{
}

SalaryVisitor::~SalaryVisitor()
{
}

void SalaryVisitor::visitEngineer(Engineer* e)
{
	cout<<"[Engineer] salary: "<<e->getSalary()<<endl;
}

void SalaryVisitor::visitManager(Manager* e)
{
	cout<<"[Manager] salary: "<<e->getSalary()<<endl;
}

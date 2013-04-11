#include "datetimeprinter.h"
#include <iostream>

using namespace std;

DateTimePrinter::DateTimePrinter()
{
	_tp = new TimePrinter();
	_dp = new DatePrinter();
}

DateTimePrinter::~DateTimePrinter()
{
	delete _tp;
	delete _dp;
}

void DateTimePrinter::print()
{
	cout<<"[NOW]"<<endl;
	_dp->printDate();
	_tp->printTime();
}

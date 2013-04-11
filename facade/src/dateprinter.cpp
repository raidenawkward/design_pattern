#include "dateprinter.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

DatePrinter::DatePrinter()
{
}

DatePrinter::~DatePrinter()
{
}

void DatePrinter::printDate()
{
	time_t now = time(NULL);
	char date[128] = {0, };
	strftime(date, sizeof(date), "%Y,%m,%d", localtime(&now));

	cout<<"[DATE] "<<date<<endl;
}

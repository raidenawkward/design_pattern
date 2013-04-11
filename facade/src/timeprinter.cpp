#include "timeprinter.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

TimePrinter::TimePrinter()
{
}

TimePrinter::~TimePrinter()
{
}

void TimePrinter::printTime()
{
	time_t now = time(NULL);
	char date[128] = {0, };
	strftime(date, sizeof(date), "%H:%M:%S", localtime(&now));

	cout<<"[TIME] "<<date<<endl;
}

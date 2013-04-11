#ifndef _DATETIMEPRINTER_H
#define _DATETIMEPRINTER_H

#include "timeprinter.h"
#include "dateprinter.h"

class DateTimePrinter {

public:
	DateTimePrinter();
	virtual ~DateTimePrinter();

	void print();

private:
	TimePrinter* _tp;
	DatePrinter* _dp;
};

#endif // _DATETIMEPRINTER_H


#ifndef _HISTOGRAMOVSERVER_H
#define _HISTOGRAMOVSERVER_H

#include "datatable.h"
#include "datatableobserver.h"

class HistogramOvserver : public DataTableObserver {

public:
	HistogramOvserver(DataTable* table);
	virtual ~HistogramOvserver();

	virtual void onNotified();

protected:
	void printData(int data, int col);
};

#endif // _HISTOGRAMOVSERVER_H


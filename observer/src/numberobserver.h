#ifndef _NUMBEROBSERVER_H
#define _NUMBEROBSERVER_H

#include "datatable.h"
#include "datatableobserver.h"

class NumberObserver : public DataTableObserver {

public:
	NumberObserver(DataTable* table);
	virtual ~NumberObserver();

	virtual void onNotified();

protected:
	void printData(int data, int col);
};

#endif // _NUMBEROBSERVER_H


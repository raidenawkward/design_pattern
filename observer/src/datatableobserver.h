#ifndef _DATATABLEOBSERVER_H
#define _DATATABLEOBSERVER_H

#include "datatable.h"

class DataTableObserver {

public:
	DataTableObserver(DataTable* table);
	virtual ~DataTableObserver();

	virtual void onNotified() = 0;

protected:
	DataTable* _table;
};

#endif // _DATATABLEOBSERVER_H


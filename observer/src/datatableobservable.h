#ifndef _DATATABLEOBSERVABLE_H
#define _DATATABLEOBSERVABLE_H

#include "datatableobserver.h"
#include <vector>

class DataTableObservable {

public:
	DataTableObservable();
	virtual ~DataTableObservable();

	void addObserver(DataTableObserver* o);
	void notifyAll();

private:
	vector<DataTableObserver*> _observers;

};

#endif // _DATATABLEOBSERVABLE_H


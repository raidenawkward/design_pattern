#include "datatableobservable.h"

DataTableObservable::DataTableObservable()
{
}

DataTableObservable::~DataTableObservable()
{
}


void DataTableObservable::addObserver(DataTableObserver* o)
{
	if (!o)
		return;

	_observers.push_back(o);
}

void DataTableObservable::notifyAll()
{
	for (int i = 0; i < _observers.size(); ++i) {
		_observers[i]->onNotified();
	}
}

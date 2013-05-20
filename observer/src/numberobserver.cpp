#include "numberobserver.h"
#include <stdio.h>

NumberObserver::NumberObserver(DataTable* table)
	:DataTableObserver(table)
{
}

NumberObserver::~NumberObserver()
{
}

void NumberObserver::onNotified()
{
	for (int i = 0; i < _table->count(); ++i) {
		int data;
		_table->get(i, &data);
		printData(data, i);
	}
}

void NumberObserver::printData(int data, int col)
{
	printf("%d: %d\n", col, data);
}

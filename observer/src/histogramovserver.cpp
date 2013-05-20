#include "histogramovserver.h"
#include <stdio.h>

HistogramOvserver::HistogramOvserver(DataTable* table)
	:DataTableObserver(table)
{
}

HistogramOvserver::~HistogramOvserver()
{
}

void HistogramOvserver::onNotified()
{
	for (int i = 0; i < _table->count(); ++i) {
		int data;
		_table->get(i, &data);
		printData(data, i);
	}
}

void HistogramOvserver::printData(int data, int col)
{
	printf("%d: ", col);
	for (int i = 0; i < data; ++i) {
		printf("#");
	}

	printf("\n");
}

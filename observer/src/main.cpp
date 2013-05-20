#include <stdio.h>
#include <stdlib.h>

#include "datatable.h"
#include "datatableobservable.h"
#include "datatableobserver.h"
#include "histogramovserver.h"
#include "numberobserver.h"


int main(int argc, char** argv)
{
	DataTable *table = new DataTable();
	table->append(5);
	table->append(7);
	table->append(9);

	DataTableObservable* observable = new DataTableObservable();

	DataTableObserver* hobserver = new HistogramOvserver(table);
	DataTableObserver* numobserver = new NumberObserver(table);

	observable->addObserver(hobserver);
	observable->addObserver(numobserver);

	observable->notifyAll();

	table->set(1, 2);

	observable->notifyAll();

	return 0;
}

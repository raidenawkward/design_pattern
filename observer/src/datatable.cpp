#include "datatable.h"

DataTable::DataTable()
{
}

DataTable::~DataTable()
{
}

bool DataTable::get(int index, int* res)
{
	if (index < 0 || index >= count())
		return false;

	if (res)
		*res = _table[index];

	return true;
}

bool DataTable::set(int index, int val)
{
	if (index < 0 || index >= count())
		return false;

	_table[index] = val;
}

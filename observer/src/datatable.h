#ifndef _DATATABLE_H
#define _DATATABLE_H

#include <vector>

using namespace std;

class DataTable {

public:
	DataTable();
	virtual ~DataTable();

	int count() { return _table.size(); }
	void append(int v) { _table.push_back(v); }

	bool get(int index, int* res);
	bool set(int index, int val);

private:
	vector<int> _table;
};

#endif // _DATATABLE_H


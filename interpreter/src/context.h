#ifndef _CONTEXT_H
#define _CONTEXT_H

#include <string>

using namespace std;

class Context {

public:
	virtual ~Context();

	virtual string data() { return _data; }
	virtual void setData(string d) { _data = d; }

protected:
	Context();

private:
	string _data;
};

#endif // _CONTEXT_H


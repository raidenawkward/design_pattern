#ifndef _NUMCONTEXT_H
#define _NUMCONTEXT_H

#include "context.h"

class NumContext : public Context {

public:
	NumContext();
	NumContext(int num);
	virtual ~NumContext();
};

#endif // _NUMCONTEXT_H


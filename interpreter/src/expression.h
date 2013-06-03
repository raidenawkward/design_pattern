#ifndef _EXPRESSION_H
#define _EXPRESSION_H

#include "context.h"

class Expression {

public:
	virtual ~Expression();

	virtual void interpret(Context& context) = 0;

protected:
	Expression();
};

#endif // _EXPRESSION_H


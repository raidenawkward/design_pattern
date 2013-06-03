#ifndef _PLUSEXPRESSION_H
#define _PLUSEXPRESSION_H

#include "expression.h"
#include "context.h"

class PlusExpression : public Expression {

public:
	PlusExpression(int addend = 0);
	virtual ~PlusExpression();

	virtual void interpret(Context& context);
private:
	int _addend;
};

#endif // _PLUSEXPRESSION_H


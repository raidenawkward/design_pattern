#ifndef _MULTIPLYEXPRESSION_H
#define _MULTIPLYEXPRESSION_H

#include "expression.h"
#include "context.h"

class MultiplyExpression : public Expression {

public:
	MultiplyExpression(int muled = 1);
	virtual ~MultiplyExpression();

	virtual void interpret(Context& context);

private:
	int _muled;
};

#endif // _MULTIPLYEXPRESSION_H


#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "context.h"
#include "numcontext.h"
#include "expression.h"
#include "multiplyexpression.h"
#include "plusexpression.h"


using namespace std;

int main(int argc, char** argv)
{
	Context* context = new NumContext(15);

	Expression* pexpr = new PlusExpression(1);
	Expression* mexpr = new MultiplyExpression(2);

	pexpr->interpret(*context);
	mexpr->interpret(*context);

	cout<<"result: "<<context->data()<<endl;

	delete context;
	delete pexpr;
	delete mexpr;

	return 0;
}

#include "multiplyexpression.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

MultiplyExpression::MultiplyExpression(int muled)
	: _muled(muled)
{
}

MultiplyExpression::~MultiplyExpression()
{
}

void MultiplyExpression::interpret(Context& context)
{
	int num = atoi(context.data().c_str());
	char buf[64];

	num *= _muled;

	sprintf(buf, "%d", num);

	context.setData(*(new string(buf)));
}

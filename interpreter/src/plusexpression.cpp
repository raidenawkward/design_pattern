#include "plusexpression.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

PlusExpression::PlusExpression(int addend)
	: _addend(addend)
{
}

PlusExpression::~PlusExpression()
{
}

void PlusExpression::interpret(Context& context)
{
	int num = atoi(context.data().c_str());
	char buf[64];

	num += _addend;

	sprintf(buf, "%d", num);

	context.setData(*(new string(buf)));
}

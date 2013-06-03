#include "numcontext.h"

#include <stdio.h>
#include <string>

using namespace std;

NumContext::NumContext()
{
	setData("0");
}

NumContext::NumContext(int num)
{
	char buf[64];
	sprintf(buf,"%d", num);

	setData(*(new string(buf)));
}

NumContext::~NumContext()
{
}

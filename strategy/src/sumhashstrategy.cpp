#include "sumhashstrategy.h"
#include <stdio.h>
#include <string.h>

SumHashStrategy::SumHashStrategy()
{
}

SumHashStrategy::~SumHashStrategy()
{
}

bool SumHashStrategy::isInputValid(const char* str)
{
	if (!str)
		return false;

	if (strlen(str) == 0)
		return false;

	return true;
}

static int getNumberLength(int n)
{
	int length = n < 0 ? 1 : 0;
	int num = n;

	while (num) {
		++length;
		num /= 10;
	}

	return length;
}

char* SumHashStrategy::hash(const char* str)
{
	int len = strlen(str);
	int sumlen = 0;
	int sum;

	for (int i = 0; i < len; ++i) {
		sum += (int)str[i];
	}

	sumlen = getNumberLength(sum);
	char* res = new char[sumlen + 1];
	memset(res, 0x00, sumlen + 1);

	sprintf(res, "%d", sum);

	return res;
}

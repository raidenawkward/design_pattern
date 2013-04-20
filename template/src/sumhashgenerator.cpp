#include "sumhashgenerator.h"
#include <string.h>
#include <stdio.h>

SumHashGenerator::SumHashGenerator()
{
}

SumHashGenerator::~SumHashGenerator()
{
}

bool SumHashGenerator::isInputValid(const char* src)
{
	if (!src)
		return false;

	if (strlen(src) == 0)
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

char* SumHashGenerator::hash(const char* src)
{
	int len = strlen(src);
	int sumlen = 0;
	int sum;

	for (int i = 0; i < len; ++i) {
		sum += (int)src[i];
	}

	sumlen = getNumberLength(sum);
	char* res = new char[sumlen + 1];
	memset(res, 0x00, sumlen + 1);

	sprintf(res, "%d", sum);

	return res;
}

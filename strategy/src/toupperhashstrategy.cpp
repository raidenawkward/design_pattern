#include "toupperhashstrategy.h"
#include <stdio.h>
#include <string.h>


ToUpperHashStrategy::ToUpperHashStrategy()
{
}

ToUpperHashStrategy::~ToUpperHashStrategy()
{
}

bool ToUpperHashStrategy::isInputValid(const char* str)
{
	if (!str)
		return false;

	if (strlen(str) == 0)
		return false;

	return true;

}

static char toUpper(char c)
{
	if (c >= 'a' && c <= 'z')
		return 'A' + c - 'a';
}

char* ToUpperHashStrategy::hash(const char* str)
{
	int len = strlen(str);
	char* res = new char[len + 1];
	memset(res, 0x00, len + 1);

	for (int i = 0; i < len; ++i) {
		res[i] = toUpper(str[i]);
	}

	return res;

}

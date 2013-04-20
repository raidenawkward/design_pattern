#include "toupperhashgenerator.h"
#include <stdio.h>
#include <string.h>

ToUpperHashGenerator::ToUpperHashGenerator()
{
}

ToUpperHashGenerator::~ToUpperHashGenerator()
{
}

bool ToUpperHashGenerator::isInputValid(const char* src)
{
	if (!src)
		return false;

	if (strlen(src) == 0)
		return false;

	return true;
}

static char toUpper(char c)
{
	if (c >= 'a' && c <= 'z')
		return 'A' + c - 'a';
}

char* ToUpperHashGenerator::hash(const char* src)
{
	int len = strlen(src);
	char* res = new char[len + 1];
	memset(res, 0x00, len + 1);

	for (int i = 0; i < len; ++i) {
		res[i] = toUpper(src[i]);
	}

	return res;
}

#include "textgenerator.h"

TextGenerator::TextGenerator()
		:_index(0)
{
}

TextGenerator::~TextGenerator()
{
}

const char* TextGenerator::generate()
{
	return "greeting!";
}

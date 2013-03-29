#include "congrats.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

Congrats::Congrats()
		:_word(NULL),
		_wordLength(0)

{
}

Congrats::~Congrats()
{
	if (_word)
		free(_word);
}

void Congrats::setWord(const char* w)
{
	if (!w)
		return;

	_wordLength = strlen(w);
	_word = (char*)malloc(sizeof(char) * (_wordLength + 1));
	if (!_word)
		_wordLength = 0;

	strcpy(_word, w);
}

char* Congrats::getWord()
{
	return _word;
}

int Congrats::wordLength()
{
	return _wordLength;
}

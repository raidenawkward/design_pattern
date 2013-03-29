#include "congratulation.h"
#include <stdlib.h>

#define CONGRATULATION_WORD "have a nice day!"

Congrats* Congratulation::_congrats = NULL;


Congratulation::Congratulation()
{
}

Congrats* Congratulation::getCongrats()
{
	if (_congrats == NULL) {
		_congrats = new Congrats();
		_congrats->setWord(CONGRATULATION_WORD);
	}

	return _congrats;
}

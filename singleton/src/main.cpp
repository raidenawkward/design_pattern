#include <stdio.h>
#include <stdlib.h>

#include "congratulation.h"
#include "congrats.h"


int main(int argc, char** argv)
{
	Congrats *congrats = Congratulation::getCongrats();

	printf("%s\n", congrats->getWord());

	return 0;
}

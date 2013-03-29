#ifndef _CONGRATULATION_H
#define _CONGRATULATION_H

#include "congrats.h"

class Congratulation {

public:
	static Congrats* getCongrats();

protected:
	Congratulation();

private:
	static Congrats* _congrats;
};

#endif // _CONGRATULATION_H


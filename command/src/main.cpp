#include <stdio.h>
#include <stdlib.h>

#include "tank.h"
#include "commander.h"

int main(int argc, char** argv)
{
	Tank *tank = new Tank();
	Commander *commander = new Commander(tank);

	commander->order(Commander::ORDER_FIRE);
	commander->order(Commander::ORDER_MOVE);
	commander->order(Commander::ORDER_RELOAD);

	delete commander;
	delete tank;

	return 0;
}

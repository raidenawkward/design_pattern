#include "commander.h"
#include "firecommand.h"
#include "movecommand.h"
#include "reloadcommand.h"

Commander::Commander(WeaponReceiver* weapon)
{
	_weapon = weapon;
}

Commander::~Commander()
{
}

void Commander::order(Order o)
{
	WeaponCommand *cmd;

	switch (o) {
	case ORDER_FIRE:
		cmd = new FireCommand(_weapon);
		break;
	case ORDER_MOVE:
		cmd = new MoveCommand(_weapon);
		break;
	case ORDER_RELOAD:
		cmd = new ReloadCommand(_weapon);
		break;
	default:
		return;
	}

	cmd->exec();
	delete cmd;
}


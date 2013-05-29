#include "movecommand.h"

MoveCommand::MoveCommand(WeaponReceiver* r)
	: WeaponCommand(r)
{
}

MoveCommand::~MoveCommand()
{
}

void MoveCommand::exec()
{
	if (!_receiver)
		return;

	_receiver->move();
}

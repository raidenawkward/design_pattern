#include "firecommand.h"

FireCommand::FireCommand(WeaponReceiver* r)
	: WeaponCommand(r)
{
}

FireCommand::~FireCommand()
{
}

void FireCommand::exec()
{
	if (!_receiver)
		return;

	_receiver->fire();
}

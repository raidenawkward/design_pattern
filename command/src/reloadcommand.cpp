#include "reloadcommand.h"

ReloadCommand::ReloadCommand(WeaponReceiver* r)
	: WeaponCommand(r)
{
}

ReloadCommand::~ReloadCommand()
{
}

void ReloadCommand::exec()
{
	if (!_receiver)
		return;

	_receiver->reload();
}

#ifndef _MOVECOMMAND_H
#define _MOVECOMMAND_H

#include "weaponcommand.h"
#include "weaponreceiver.h"

class MoveCommand : public WeaponCommand {

public:
	MoveCommand(WeaponReceiver* r);
	virtual ~MoveCommand();

	virtual void exec();
};

#endif // _MOVECOMMAND_H


#ifndef _FIRECOMMAND_H
#define _FIRECOMMAND_H

#include "weaponcommand.h"
#include "weaponreceiver.h"

class FireCommand : public WeaponCommand {

public:
	FireCommand(WeaponReceiver* r);
	virtual ~FireCommand();

	virtual void exec();
};

#endif // _FIRECOMMAND_H


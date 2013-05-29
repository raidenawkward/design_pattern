#ifndef _WEAPONCOMMAND_H
#define _WEAPONCOMMAND_H

#include "weaponreceiver.h"

class WeaponCommand {

public:
	WeaponCommand(WeaponReceiver* r);
	virtual ~WeaponCommand();

	virtual void exec() = 0;

protected:
	WeaponReceiver* _receiver;
};

#endif // _WEAPONCOMMAND_H


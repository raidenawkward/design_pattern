#ifndef _RELOADCOMMAND_H
#define _RELOADCOMMAND_H

#include "weaponcommand.h"
#include "weaponreceiver.h"

class ReloadCommand : public WeaponCommand {

public:
	ReloadCommand(WeaponReceiver* r);
	virtual ~ReloadCommand();

	virtual void exec();
};

#endif // _RELOADCOMMAND_H


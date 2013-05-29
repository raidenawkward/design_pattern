#ifndef _TANK_H
#define _TANK_H

#include "weaponreceiver.h"

class Tank : public WeaponReceiver {

public:
	Tank();
	virtual ~Tank();

	virtual void fire();
	virtual void move();
	virtual void reload();
};

#endif // _TANK_H


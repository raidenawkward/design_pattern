#ifndef _COMMANDER_H
#define _COMMANDER_H

#include "weaponreceiver.h"
#include "weaponcommand.h"

class Commander {

public:

	enum Order {
		ORDER_FIRE,
		ORDER_MOVE,
		ORDER_RELOAD
	};

	Commander(WeaponReceiver* weapon);
	virtual ~Commander();

	void order(Order o);

private:
	WeaponReceiver* _weapon;
};

#endif // _COMMANDER_H


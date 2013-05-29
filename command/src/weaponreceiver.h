#ifndef _WEAPONRECEIVER_H
#define _WEAPONRECEIVER_H

class WeaponReceiver {

public:
	virtual void fire() = 0;
	virtual void move() = 0;
	virtual void reload() = 0;
};

#endif // _WEAPONRECEIVER_H


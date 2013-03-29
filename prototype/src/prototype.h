#ifndef _PROTOTYPE_H
#define _PROTOTYPE_H

class Prototype {

public:
	virtual ~Prototype();

	virtual Prototype* clone() const = 0;

protected:
	Prototype();
};

#endif // _PROTOTYPE_H


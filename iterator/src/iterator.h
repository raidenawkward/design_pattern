#ifndef _ITERATOR_H
#define _ITERATOR_H

class Iterator {

public:
	Iterator();
	virtual ~Iterator();

	// goto first
	virtual void first() = 0;
	//goto end
	virtual void end() = 0;
	virtual bool next() = 0;
};

#endif // _ITERATOR_H


#ifndef _HASHSTRATEGY_H
#define _HASHSTRATEGY_H

class HashStrategy {

public:
	virtual ~HashStrategy();

	char* genHash(const char* str);

protected:
	HashStrategy();

	virtual bool isInputValid(const char* str) = 0;
	virtual char* hash(const char* str) = 0;
};

#endif // _HASHSTRATEGY_H


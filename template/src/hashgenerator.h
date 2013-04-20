#ifndef _HASHGENERATOR_H
#define _HASHGENERATOR_H

class HashGenerator {

public:
	virtual ~HashGenerator();

	char* genHash(const char* src);

protected:
	HashGenerator();

	virtual bool isInputValid(const char* src) = 0;
	virtual char* hash(const char* src) = 0;
};

#endif // _HASHGENERATOR_H


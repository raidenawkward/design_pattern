#ifndef _CONGRATS_H
#define _CONGRATS_H

class Congrats {

public:
	Congrats();
	virtual ~Congrats();

	void setWord(const char* w);
	char* getWord();

	int wordLength();

private:
	char* _word;
	int _wordLength;
};

#endif // _CONGRATS_H


#ifndef _TEXTGENERATOR_H
#define _TEXTGENERATOR_H

class TextGenerator {

public:
	TextGenerator();
	virtual ~TextGenerator();

	const char* generate();

protected:
	int _index;
};

#endif // _TEXTGENERATOR_H


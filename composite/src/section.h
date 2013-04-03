#ifndef _SECTION_H
#define _SECTION_H


#define SECTION_TEXT_LENGTH (128)

class Section {

public:
	virtual ~Section();

	virtual void print() = 0;

	virtual void setText(const char* text);

protected:
	Section();

	char _text[SECTION_TEXT_LENGTH];
};

#endif // _SECTION_H


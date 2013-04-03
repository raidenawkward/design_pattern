#ifndef _TITLE_H
#define _TITLE_H

#include "paragraph.h"

class Title : public Paragraph {

public:
	Title();
	virtual ~Title();

	virtual void print();
	virtual void appendSector(Paragraph* s);
};

#endif // _TITLE_H


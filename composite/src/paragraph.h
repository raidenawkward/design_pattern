#ifndef _PARAGRAPH_H
#define _PARAGRAPH_H

#include "section.h"
#include <vector>

using namespace std;

class Paragraph : public Section {

public:
	Paragraph();
	virtual ~Paragraph();

	virtual void print();
	virtual void appendSector(Paragraph* s);

protected:
	vector<Paragraph*> _sections;
};

#endif // _PARAGRAPH_H


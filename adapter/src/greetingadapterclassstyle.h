#ifndef _GREETINGADAPTERCLASSSTYLE_H
#define _GREETINGADAPTERCLASSSTYLE_H

#include "colorprinter.h"
#include "textgenerator.h"

class GreetingAdapterClassStyle : public ColorPrinter, TextGenerator {

public:
	GreetingAdapterClassStyle();
	virtual ~GreetingAdapterClassStyle();

	void greeting();
};

#endif // _GREETINGADAPTERCLASSSTYLE_H


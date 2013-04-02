#ifndef _GREETINGADAPTERCOMPOSITESTYLE_H
#define _GREETINGADAPTERCOMPOSITESTYLE_H

#include "colorprinter.h"
#include "textgenerator.h"

class GreetingAdapterCompositeStyle : public TextGenerator {

public:
	GreetingAdapterCompositeStyle(ColorPrinter* printer);
	virtual ~GreetingAdapterCompositeStyle();

	void greeting();

protected:
	ColorPrinter* _printer;
};

#endif // _GREETINGADAPTERCOMPOSITESTYLE_H


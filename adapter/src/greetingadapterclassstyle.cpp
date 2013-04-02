#include "greetingadapterclassstyle.h"

GreetingAdapterClassStyle::GreetingAdapterClassStyle()
{
}

GreetingAdapterClassStyle::~GreetingAdapterClassStyle()
{
}

void GreetingAdapterClassStyle::greeting()
{
	const char* greeting = this->generate();
	this->setColor(COLOR_RED);
	this->print(greeting);
}

#include "yellowlight.h"

YellowLight::YellowLight()
{
	_state = YELLOW;
}

YellowLight::~YellowLight()
{
}

bool YellowLight::nextState(TrafficLights* lights)
{
	return changeState(lights, new RedLight());
}

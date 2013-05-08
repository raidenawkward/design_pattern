#include "greenlight.h"

GreenLight::GreenLight()
{
	_state = GREEN;
}

GreenLight::~GreenLight()
{
}

bool GreenLight::nextState(TrafficLights* lights)
{
	return changeState(lights, new YellowLight());
}

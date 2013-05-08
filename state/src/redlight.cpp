#include "redlight.h"
#include "greenlight.h"

RedLight::RedLight()
{
	_state = RED;
}

RedLight::~RedLight()
{
}

bool RedLight::nextState(TrafficLights* lights)
{
	return changeState(lights, new GreenLight());
}

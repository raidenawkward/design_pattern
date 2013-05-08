#include "trafficlightsstate.h"
#include <stdlib.h>

TrafficLightsState::TrafficLightsState()
	:_state(UNKNOWN)
{
}

TrafficLightsState::~TrafficLightsState()
{
}

bool TrafficLightsState::changeState(TrafficLights* lights, TrafficLightsState* state)
{
	if (!lights)
		return false;

	return lights->changeState(state);
}

#include "trafficlights.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define INTERVAL (1000000)

TrafficLights::TrafficLights()
{
	_state = NULL;
}

TrafficLights::~TrafficLights()
{
	if (_state)
		delete _state;
}

TrafficLights::TrafficLights(TrafficLightsState* state)
	:_state(state)
{
}

void TrafficLights::run()
{
	if (!_state)
		return;

	present();

	while(1) {
		usleep(INTERVAL);
		_state->nextState(this);
		present();
	}
}

void TrafficLights::present()
{
	if (!_state)
		return;

	fflush(stdout);
	printf("%c\b", _state->getStateLight());
}

bool TrafficLights::changeState(TrafficLightsState* state)
{
	bool res = true;

	if (_state)
		delete _state;

	_state = state;

	return res;
}

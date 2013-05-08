#ifndef _TRAFFICLIGHTSSTATE_H
#define _TRAFFICLIGHTSSTATE_H

#include "trafficlights.h"

class TrafficLights;

class TrafficLightsState {

public:
	enum State {
		RED = 0,
		YELLOW,
		GREEN,
		UNKNOWN,
	};

	TrafficLightsState();
	virtual ~TrafficLightsState();

	virtual char getStateLight() = 0;

	virtual bool nextState(TrafficLights* lights) = 0;

protected:
	virtual bool changeState(TrafficLights* lights, TrafficLightsState* state);

	State _state;
};

#endif // _TRAFFICLIGHTSSTATE_H


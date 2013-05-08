#ifndef _REDLIGHT_H
#define _REDLIGHT_H

#include "trafficlightsstate.h"
#include "trafficlights.h"
#include "greenlight.h"

class TrafficLightsState;
class GreenLight;

class RedLight : public TrafficLightsState {

public:
	RedLight();
	virtual ~RedLight();

	virtual char getStateLight() { return 'R'; }
	virtual bool nextState(TrafficLights* lights);
};

#endif // _REDLIGHT_H


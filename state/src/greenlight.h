#ifndef _GREENLIGHT_H
#define _GREENLIGHT_H

#include "trafficlightsstate.h"
#include "trafficlights.h"
#include "yellowlight.h"

class TrafficLightsState;
class YellowLight;

class GreenLight : public TrafficLightsState {

public:
	GreenLight();
	virtual ~GreenLight();

	virtual char getStateLight() { return 'G'; }
	virtual bool nextState(TrafficLights* lights);
};

#endif // _GREENLIGHT_H


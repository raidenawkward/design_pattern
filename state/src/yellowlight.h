#ifndef _YELLOWLIGHT_H
#define _YELLOWLIGHT_H


#include "trafficlightsstate.h"
#include "trafficlights.h"
#include "redlight.h"

class TrafficLightsState;
class RedLight;

class YellowLight : public TrafficLightsState {

public:
	YellowLight();
	virtual ~YellowLight();

	virtual char getStateLight() { return 'Y'; }
	virtual bool nextState(TrafficLights* lights);
};

#endif // _YELLOWLIGHT_H


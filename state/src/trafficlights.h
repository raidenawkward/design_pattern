#ifndef _TRAFFICLIGHTS_H
#define _TRAFFICLIGHTS_H

#include "trafficlightsstate.h"

class TrafficLightsState;

class TrafficLights {

public:
	TrafficLights();
	TrafficLights(TrafficLightsState* state);

	virtual ~TrafficLights();

	void run();

protected:
	void present();

private:
	friend class TrafficLightsState;
	bool changeState(TrafficLightsState* state);

	TrafficLightsState* _state;
};

#endif // _TRAFFICLIGHTS_H


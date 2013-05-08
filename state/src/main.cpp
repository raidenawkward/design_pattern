#include <stdio.h>
#include <stdlib.h>

#include "trafficlightsstate.h"
#include "trafficlights.h"
#include "redlight.h"
#include "greenlight.h"
#include "yellowlight.h"


int main(int argc, char** argv)
{
	TrafficLightsState* state = new GreenLight();
	TrafficLights* lights = new TrafficLights(state);

	lights->run();

	delete lights;

	return 0;
}

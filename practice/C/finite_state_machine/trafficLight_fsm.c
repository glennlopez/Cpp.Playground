/*
	3 inputs: 	2 car sensors, 1 pedestrian
	8 outputs:	3 west, 3 south, 2 pedestrian

	pedestrian sensor is push and hold - presense sense
	car sensors are also push and hold - presense sense

	west & south lights must both be red before walk light can be green
	walk light should be red while cars have green or yellow light

	PORT B: 6 Traffic lights (output)
	PORT F: 2 Pedestrian lights (output)
	PORT E: 3 Sensors (input)

	~ uC OUTPUTS ~
	South/North: 	PB0 - PB2
	West/East: 		PB3 - PB5

	Walk Light:		PF1
	Dont Walk:		PF3


	~ uC INPUTS ~
	pedestrian Detector:		PE2
	South/North Detector:	PE1
	West/East Detector:		PE0



*/
#include <stdio.h>

struct PiDataSet{
	void (*out)(void);
	unsigned int delay;
	unsigned int next[4];
}; typedef const struct PiDataSet FSM;

FSM PiTraffic[7] = {

};

/************
	MAIN
************/
int main(){

	while(1){			//inf loop

	}

	printf("\n");		//newline
	return 0;
}




/*******************
	PI FUNCTIONS
********************/

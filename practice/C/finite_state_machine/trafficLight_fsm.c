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
	Pedestrian Detector:		PE2
	South/North Detector:	PE1
	West/East Detector:		PE0



*/
#include <stdio.h>

struct DataSet{
	void (*out)(void);
	unsigned int delay;
	unsigned int next[8];
}; typedef const struct DataSet FSM;

//function prototypes
void delay(int num);

//function pointer prototypes
void goW(); void waitW(); void goS(); void waitS();

#define GoW 	0
#define WaitW 	1
#define GoS 	2
#define WaitS	3

#define GoP		4

FSM TrafficLight[8] = {
//	output	delay 		next states
	{&goW, 	1, 	{GoW,		GoW, 		WaitW, 	WaitW	}},
	{&waitW, 1, 	{GoS,		GoS, 		GoS, 		GoS	}},
	{&goS, 	1, 	{GoS,		WaitS, 	GoS, 		WaitS	}},
	{&waitS, 1, 	{GoW,		GoW, 		GoW, 		GoW	}}

};

unsigned int cState;

/************
	MAIN
************/
int main(){

	//setup
	cState = 0;

	//fsm loop
	while(1){

	}

	printf("\n");		//newline
	return 0;
}




/*******************
	FUNCTIONS
********************/
void delay(int num){

}


/*******************
	FSM FUNCTIONS
********************/
void goW(){
	//PortB: 0x0C | PortF:0x01
	printf("goW\n");		//newline

}
void waitW(){
	//PortB: 0x14 | PortF:0x01
	printf("waitW\n");		//newline

}
void goS(){
	//PortB: 0x21 | PortF:0x01
	printf("goS\n");		//newline

}
void waitS(){
	//PortB: 0x22 | PortF:0x01
	printf("waitS\n");		//newline

}

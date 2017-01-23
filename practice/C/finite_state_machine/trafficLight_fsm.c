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

//function prototype
void delay(int num);

//function (*pointer) prototype
void goW(); void waitW(); void goS(); void waitS();
void goP(); void fN1(); void fF1(); void fN2(); void fF2();

#define GoW 0
#define WaW 1
#define GoS 2
#define WaS	3
#define GoP	4
#define FN1	5
#define FF1	6
#define FN2	7
#define FF2	8

FSM TrafficLight[9] = {
//	state	 delay	000	001	010	011	100	101	110	111
	{&goW, 	1, 	{GoW,	GoW, 	WaW, 	WaW, 	WaW, 	WaW, 	WaW, 	WaW	}},
	{&waitW, 1, 	{GoS, GoS, 	GoS, 	GoS, 	GoP, 	GoP, 	GoP, 	GoS	}},
	{&goS, 	1, 	{GoS, WaS, 	GoS, 	WaS, 	WaS, 	WaS, 	WaS, 	WaS	}},
	{&waitS, 1, 	{GoW,	GoW, 	GoW, 	GoW, 	GoP, 	GoP, 	GoP, 	GoP	}},
	{&goP, 	1, 	{GoP, FN1, 	FN1, 	FN1, 	GoP, 	FN1, 	FN1, 	FN1	}},
	{&fN1, 	1, 	{FF1,	FF1, 	FF1, 	FF1, 	FF1, 	FF1, 	FF1, 	FF1	}},
	{&fF1, 	1, 	{FN2, FN2, 	FN2, 	FN2, 	FN2, 	FN2, 	FN2, 	FN2	}},
	{&fN2, 	1, 	{FF2, FF2, 	FF2, 	FF2, 	FF2, 	FF2, 	FF2,	FF2	}},
	{&fF2, 	1, 	{GoP,	GoW, 	GoS, 	GoW, 	GoP, 	GoW, 	GoS, 	GoW	}}



};


/************
	MAIN
************/
int main(){ unsigned int cState, input;

	//setup
	cState = 0;

	//fsm loop
	while(1){

		//output
		TrafficLight[cState].out();

		//input
		printf("Input: ");
		scanf("%i", &input);

		//change state based on input and current state
		cState = TrafficLight[cState].next[input];

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


void goP(){

}
void fN1(){

}
void fF1(){

}
void fN2(){

}
void fF2(){

}

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
	void (*out)(void);			//function pointer used to reduce integration friction
	unsigned int delay;			//delay filler (change as per uC)
	unsigned int next[8];		//calculated by 2^(num of input bits)
}; typedef const struct DataSet FSM;

#define GoW 0
#define WaW 1
#define GoS 2
#define WaS	3
#define GoP	4
#define FN1	5
#define FF1	6
#define FN2	7
#define FF2	8

//function prototype
void delay(int num);

//function (*pointer) prototype
void goW(); void waitW(); void goS(); void waitS();
void goP(); void fN1(); void fF1(); void fN2(); void fF2();

//state machine data aray
FSM Lights[9] = {
//	output 	 delay	000	001	010	011	100	101	110	111
	{&goW, 		1, 	{GoW,	GoW, 	WaW, 	WaW, 	WaW, 	WaW, 	WaW, 	WaW	}},
	{&waitW, 	1, 	{GoS, GoS, 	GoS, 	GoS, 	GoP, 	GoP, 	GoP, 	GoS	}},
	{&goS, 		1, 	{GoS, WaS, 	GoS, 	WaS, 	WaS, 	WaS, 	WaS, 	WaS	}},
	{&waitS, 	1, 	{GoW,	GoW, 	GoW, 	GoW, 	GoP, 	GoP, 	GoP, 	GoP	}},
	{&goP, 		1, 	{GoP, FN1, 	FN1, 	FN1, 	GoP, 	FN1, 	FN1, 	FN1	}},
	{&fN1, 		1, 	{FF1,	FF1, 	FF1, 	FF1, 	FF1, 	FF1, 	FF1, 	FF1	}},
	{&fF1, 		1, 	{FN2, FN2, 	FN2, 	FN2, 	FN2, 	FN2, 	FN2, 	FN2	}},
	{&fN2, 		1, 	{FF2, FF2, 	FF2, 	FF2, 	FF2, 	FF2, 	FF2,	FF2	}},
	{&fF2, 		1, 	{GoP,	GoW, 	GoS, 	GoW, 	GoP, 	GoW, 	GoS, 	GoW	}}
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
		Lights[cState].out();

		//input
		printf("Input: ");
		scanf("%i", &input);

		//change state based on input and current state
		cState = Lights[cState].next[input];

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
	//PortB: 0x0C PortF:0x01
	printf("goW\n");
}
void waitW(){
	//PortB: 0x14 PortF:0x01
	printf("waitW\n");
}
void goS(){
	//PortB: 0x21 PortF:0x01
	printf("goS\n");
}
void waitS(){
	//PortB: 0x22 PortF:0x01
	printf("waitS\n");
}
void goP(){
	//PortB: 0x24	PortF:0x08
	printf("goP\n");
}
void fN1(){
	//PortB: 0x24	PortF:0x02
	printf("fN1\n");
}
void fF1(){
	//PortB: 0x24	PortF:0x00
	printf("fF1\n");
}
void fN2(){
	//PortB: 0x24	PortF:0x02
	printf("fN2\n");
}
void fF2(){
	//PortB: 0x24	PortF:0x00
	printf("fF2\n");
}

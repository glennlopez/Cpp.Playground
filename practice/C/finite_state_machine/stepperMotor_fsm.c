#include <stdio.h>

//struct datatype definition
struct fsmData{
	unsigned int out;
	unsigned int wait;
	unsigned int next[4];
}; typedef struct fsmData machine;

//prototype

//FSM Data stream
	/*
		0x00	-	No sensors
		0x01	-	Right sensor
		0x10	-	Left sensor
		0x11	-	Both sensors
	*/
machine MotorFSM[10] = {
	//				[0,1,2,3] <-- 	Possible Input
	{0,		2,	{1,4,7,3}},		//S0: initial state

	{1,		2,	{2,2,2,0}},		//S1: straight
	{2,		2,	{3,3,3,1}},		//S2: straight
	{3,		2,	{0,0,0,2}},		//S3: straight

	{4,		5,	{5,5,5,5}},		//S4: turn left
	{5,		5,	{6,6,6,6}},		//S5: turn left
	{6,		5,	{0,0,0,0}},		//S6: turn left

	{7,		5,	{8,8,8,8}},		//S7: turn right
	{8,		5,	{9,9,9,9}},		//S8: turn right
	{9,		5,	{0,0,0,0}},		//S9: turn right
};

unsigned int cState;
unsigned int output;
unsigned int input;


/***************
	MAIN
****************/
int main(){
	//setup
	cState = 0;

	//main loop
	while(1){
		//output
		output = MotorFSM[cState].out;
		printf("Output: %i\n", output);

		//input
		//printf("Input: ");
		scanf("%i\n", &input);
		cState = MotorFSM[cState].next[input];

	}

	printf("\n");	//newline
	return 0;
}




/***************
	FUNCTION
****************/

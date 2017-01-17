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
	{0x55,	2,	{1,4,7,3}},		//S0: initial state

	{0x66,	2,	{2,2,2,0}},		//S1: straight
	{0xAA,	2,	{3,3,3,1}},		//S2: straight
	{0x99,	2,	{0,0,0,2}},		//S3: straight

	{0x69,	5,	{5,5,5,5}},		//S4: turn left
	{0xAA,	5,	{6,6,6,6}},		//S5: turn left
	{0x96,	5,	{0,0,0,0}},		//S6: turn left

	{0x96,	5,	{8,8,8,8}},		//S7: turn right
	{0xAA,	5,	{9,9,9,9}},		//S8: turn right
	{0x69,	5,	{0,0,0,0}},		//S9: turn right
};




/***************
	MAIN
****************/
int main(){



	printf("\n");	//newline
	return 0;
}




/***************
	FUNCTION
****************/

#include <stdio.h>

//struct datatype definition
struct fsmData{
	void (*out)();
	unsigned int output;
	unsigned int wait;
	unsigned int next[4];
}; typedef struct fsmData machine;

//prototype

//FSM Data stream
machine MotorFSM[10] = {
	//
	{},

	{},
	{},
	{},

	{},
	{},
	{},

	{},
	{},
	{}
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

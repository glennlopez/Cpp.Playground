#include <stdio.h>

struct dataBank{
	void (*out)(void);		//output a function
	unsigned int delay;		//delay param
	unsigned int next[4];	//4 possible next states
}; typedef const struct dataBank machine;

//state definitions
unsigned int cState;	//current state
#define CEN 0			//center state
#define LEF 1			//left state
#define RIG 2			//right state

//function prototypes
void Center(void);
void Left(void);
void Right(void);

machine FSM[3] = {	//change state based on current state and input
//(*output)		delay		{next states}
	{&Center,	1,			{RIG,	LEF,	RIG,	CEN}},
	{&Left,		1,			{LEF,	CEN,	RIG,	CEN}},
	{&Right,		1,			{RIG,	LEF,	CEN,	CEN}}
	//	inputs-->			00		01		10		11
	//	in dec-->			0		1		2		3
};


/**************
	MAIN
**************/
int main(){
	cState = CEN;	//set initial state to CENTER

	(FSM[0].out)();
	while(1){
		//output

		//get input

	}

	printf("\n");	//newline
	return 0;
}





/**************
	FUNCTION
**************/
void Center(void){
	printf("Running: Forward\n");
}
void Left(void){
	printf("Turning: Left\n");
}
void Right(void){
	printf("Turning: Right\n");
}

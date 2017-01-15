#include <stdio.h>

struct dataBank{
	void (*pFunk)(void);		//output a function
	unsigned int delay;		//delay param
	unsigned int next[4];	//4 possible next states

}; typedef const struct dataBank machine;

//definitions for next states
#define CEN 0	//center
#define LEF 1	//left
#define RIG 2	//right

//function prototypes
void Center(void);
void Left(void);
void Right(void);

machine FSM[3] = {
	//output		delay		next states
	//							00		01		10		11
	{&Center,	1,			{RIG,	LEF,	RIG,	CEN}},
	{&Left,		1,			{LEF,	CEN,	RIG,	CEN}},
	{&Right,		1,			{RIG,	LEF,	CEN,	CEN}}
};


/**************
	MAIN
**************/
int main(){

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

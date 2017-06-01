#include <stdio.h>

/*
	Simulated traffic light fsm
*/

struct state{
	unsigned int out;
	unsigned int wait;
	unsigned int next[4];
};

//defines
#define goN 	0
#define waitN	1
#define goE		2
#define waitE	3
typedef const struct state sType;


sType FSM[4] = {	// 4 states
//	 output	 delay	possible next states
	{100001, 	30,	{goN,waitN,goN,waitN}},
	{100010, 	5, 	{goE,goE,goE,goE}},
	{001100,		30,	{goE,goE,waitE,waitE}},
	{010100,		5,		{goN,goN,goN,goN}}

};

//index the current state
unsigned int cState = goN;

//index the input
unsigned int input;

int main(){


	while(1){



	}

	printf("\n");		//newline
	return 0;
}

#include <stdio.h>
/*
	This is a prototype for a simple finite state
	machine that is to be implemented on a microcontroller.

		Detect odd numbers of 1's and output a ON if odd
		and OFF if even.

*/

struct state{
	unsigned int out;
	unsigned next[2];
};

typedef const struct state sType;
#define EVEN 0
#define ODD 1

unsigned int cState = EVEN; 	// initial state
unsigned int GPIO_DATA = 0;	// simulated data

sType FSM[2] = {	//finite state machine with 2 states
	{0,{EVEN,ODD}},	//even 	- FSM[cState].next[input];
	{1,{ODD,EVEN}}		//odd
};


int main(){
	unsigned int input;

		while(1){	//simulated hardware output

			//output based on current state;
			GPIO_DATA = FSM[cState].out;
			printf("Input: %i\n", GPIO_DATA);

			//get input
			scanf("%i", &input);

			//change state based on input and current state
			cState = FSM[cState].next[input];

		}


	printf("\n");
	return 0;
}

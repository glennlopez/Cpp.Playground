#include <stdio.h>

/*
	Simulated traffic light fsm
*/

int main(){

	struct state{
		unsigned int out;
		unsigned int wait;
		unsigned int next[4];
	};

	printf("\n");		//newline
	return 0;
}

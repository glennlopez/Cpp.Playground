// https://www.youtube.com/watch?v=wAmq8eIkdI8
#include <stdio.h>
#include <stdlib.h>

/*
	I keep forgetting how to do passbyreference/adderess function arguments.
	I clearly do not understand how and why passing by address works yet
*/

//pritotype
void passByValue(int);
void passByAddress(int*);

int main(){
	int tuna = 20;

	passByValue(tuna);
	printf("Passing by value, tuna is now: %d\n", tuna);

	passByAddress(&tuna);
	printf("Passing by address, tuna is now: %d\n", tuna);

	printf("\n");	//new line
	return 0;
}




void passByValue(int i){
	i = 99;
}

void passByAddress(int *i){
	*i = 64;
}

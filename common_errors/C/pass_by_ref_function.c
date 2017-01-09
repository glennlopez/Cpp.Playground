// https://www.youtube.com/watch?v=wAmq8eIkdI8
#include <stdio.h>
#include <stdlib.h>

/*
	I keep forgetting how to do passbyreference/adderess function arguments.
	I think part of the reason is that I do not use this as often as I do with
	Pass by value. It is most likely the result of me not yet understanding
	how to properly manage memeory in C/CPP
*/

//pritotype
void passByValue(int);
void passByAddress(int*);

int main(){


	printf("\n");	//new line
	return 0;
}




void passByValue(int i){
	i = 99;
}

void passByAddress(int *i){
	*i = 64;
}

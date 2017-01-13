#include <stdio.h>

//sum function
int add(int a, int b){
	return a + b;
}


int main(){	int sum;

//STEPS//
	/*1*/	int (*p)(int, int);	//define the function pointer
	/*2*/	p = &add;				//point p to address of add 
	/*3*/	sum = (*p)(10,5);		//call the pointer function

	printf("Sum is: %i\n", sum);
	printf("\n");
	return 0;
}

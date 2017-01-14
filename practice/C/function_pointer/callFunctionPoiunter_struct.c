#include <stdio.h>

//struct datatype definition for printing data
struct printData{
	void (*dataFunc)(void);
	int output;
}; typedef const struct printData output;

//struct dataype definition for calculating data
struct calcData{
	int (*calcFunc)(int, int);
	int input[2];
}; typedef const struct calcData computer;



//struct datatypes that take no argument
void hWorld(void);
void name(void);
output Option[2] = {
	{&hWorld, 0},
	{&name, 1}
};

//struct datatypes that takes arguments
int add(int, int);
int multiply(int, int);
computer Calculator[2] = {
	{&add, {1,2}},
	{&multiply, {3,4}}
};






/*************
	MAIN
**************/
int main(){



	printf("\n");
	return 0;
}






/*************
	FUNCTION
**************/
void hWorld(void){
	printf("Hello world!\n");
}
void name(void){
	printf("What is your name again?\n");
}

int add(int a, int b){
	return a + b;
}
int multiply(int a, int b){
	return (a * b);
}

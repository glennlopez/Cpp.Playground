#include <stdio.h>

//struct printing data
struct printData{
	void (*dataFunc)(void);
	int output;
}; typedef const struct printData output;

//struct calculating data
struct calcData{
	int (*calcFunc)(int, int);
	int input[2];
}; typedef const struct calcData computer;

//prototypes
void hWorld(void);
void name(void);

int add(int, int);
int multiply(int, int);

output Option[2] = {
	{&hWorld, 0},
	{&name, 1}
};


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

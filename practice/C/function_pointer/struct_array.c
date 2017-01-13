#include <stdio.h>

//prototypes
void hello(void);



int main(){

	void(*p)(void);		//define pointer
	p = &hello;				//point p to sum function

	(*p)();		

	printf("\n");
	return 0;
}


/*************
	FUNCTION
*************/
void hello(void){
	printf("Hello there!\n");
}

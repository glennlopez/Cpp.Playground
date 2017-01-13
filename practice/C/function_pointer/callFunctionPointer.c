#include <stdio.h>

//prototypes
void hello(void);		//define regular pointer
void name(void);		//define regular pointer

void(*pFunc)(void);		//define pointer function

int main(){



	pFunc = &hello;			//assign pFunc to address of hello()
	(*pFunc)();					//call function pointer pFunc

	pFunc = &name;				//re-assign pFunc to address of name()
	(*pFunc)();					//call function pointer pFunc

	printf("\n");
	return 0;
}


/*************
	FUNCTION
*************/
void hello(void){
	printf("Hello there!\n");
}

void name(void){
	printf("What is your name?\n");
}

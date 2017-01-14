#include <stdio.h>

struct datatype{
	void(*pFunc)(void);	//<-- pointer function is defined here
	int output;
}; typedef const struct datatype machine;

//prototypes
void hello(void);			//define regular pointer
void name(void);			//define regular pointer

//void(*pFunc)(void);		//dont need this here anymore since its in struct now

//struct 'datatype' contents
machine Option[2] = {
	{&hello, 0},
	{&name, 1}
};





int main(){

	//(*p)();
	(Option[0].pFunc)();		//call function pointer *pFunc in option[1]
	/*
		pFunc = &hello;			//assign pFunc to address of hello()
		(*pFunc)();					//call function pointer pFunc
	*/

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

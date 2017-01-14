#include <stdio.h>

struct dataBank{
	void (*pFunk)(void);		//output
	unsigned int delay;		//delay
	unsigned int next[3];	//next states

}; typedef const struct dataBank machine;

void Center(void);
void Left(void);
void Right(void);



machine FSM[3] = {
	{},
	{},
	{}
};


/**************
	MAIN
**************/
int main(){

	printf("\n");	//newline
	return 0;
}





/**************
	FUNCTION
**************/
void Center(void){

}
void Left(void){

}
void Right(void){
	
}

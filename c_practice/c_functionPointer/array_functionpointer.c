#include <stdio.h>
void UART_OutString(char *pt);

int main(){

	UART_OutString("Test");

	printf("\n");		//newline
	return 0;
}


void UART_OutString(char *pt){
// []as part of Lab 11 implement this function
while(*pt){

  pt++;
}

}

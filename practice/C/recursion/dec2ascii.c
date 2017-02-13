#include <stdio.h>
void UART_ConvertUDec(unsigned long n);

int main(){
	unsigned char String[10];
	UART_ConvertUDec(12344321);

	printf("\n");		//newline
	return 0;
}


void UART_ConvertUDec(unsigned long n){
	unsigned long tempN = n;

	//count number of digits in n
	unsigned long count = 0;
	while(tempN > 0){
		count++;
		tempN = tempN / 10;
	}

	//convert dec to ascii
	unsigned long i;
	for(i = 0; i < count; i++){

	}

	printf("count: %lu\n", count);
}

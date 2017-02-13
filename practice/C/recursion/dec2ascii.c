#include <stdio.h>
void UART_ConvertUDec(unsigned long n);
unsigned char String[10];

int main(){
	UART_ConvertUDec(12345);

	printf("%c\n", String[0]);
	printf("%c\n", String[1]);
	printf("%c\n", String[2]);
	printf("%c\n", String[3]);
	printf("%c\n", String[4]);


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
		String[i] = (n % 10) + 0x30;	//convert dec to ascii
		n = n / 10;	//decrement to the next digit in n
	}

	printf("count: %lu\n", count);
}

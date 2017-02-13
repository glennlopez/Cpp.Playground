#include <stdio.h>
void UART_ConvertUDec(unsigned long n);
unsigned char String[10];

int main(){
	unsigned long param = 12345;
	UART_ConvertUDec(param);

	//debug: display each char
	printf("0: %c\n", String[0]);
	printf("1: %c\n", String[1]);
	printf("2: %c\n", String[2]);
	printf("3: %c\n", String[3]);
	printf("4: %c\n", String[4]);
	printf("5: %c\n", String[5]);
	printf("6: %c\n", String[6]);
	printf("7: %c\n", String[7]);

	//debug: count where '\0' is
	//FIXME: Finish this

	//debug: print input
	printf("Input(lu): %lu\n", param);
	//debug: print string
	printf("Output(s): %s\n", String);



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

	//debug: place null char at the end
	String[5] = '\0';

	//convert dec to ascii
	unsigned long i;
	for(i = 0; i < count; i++){
		String[i] = (n % 10) + 0x30;	//place ascii in Strings array
		n = n / 10;	//decrement to the next digit in n
	}

	//debug: print count
	printf("Number of digits: %lu\n", count);
}

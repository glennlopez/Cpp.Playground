#include <stdio.h>
//debug func
void display_char(void);
void find_null(void);

//code under test
void UART_ConvertUDec(unsigned long n);
unsigned char String[10];


/****************
	MAIN
*****************/
int main(){
	//code under test
	unsigned long param = 12345;
	UART_ConvertUDec(param);


	//debug functions
	String[7] = 'x';							//debug:string injection
	printf("Input(lu): %lu\n", param);	//debug: print input
	printf("Output(s): %s\n", String);	//debug: print string
	display_char(); 							//debug: display each char
	find_null();								//debug: find where null is


	printf("\n");		//newline
	return 0;
}

/****************
TEST FUNCTION
*****************/
void UART_ConvertUDec(unsigned long n){
	unsigned long tempN = n;

	//count number of digits in n
	unsigned long count = 0;
	while(tempN > 0){
		count++;
		tempN /= 10;
	}

	//convert dec to ascii
	unsigned long i;
	for(i = 0; i < count; i++){
		String[i] = (n % 10) + 0x30;	//place ascii in Strings array
		n = n / 10;	//decrement to the next digit in n
	}

	//debug: print count
	printf("Number of digits: %lu\n", count);
}


/****************
DEBUG FUNCTIONS
*****************/
void display_char(void){
	printf("0: %c\n", String[0]);
	printf("1: %c\n", String[1]);
	printf("2: %c\n", String[2]);
	printf("3: %c\n", String[3]);
	printf("4: %c\n", String[4]);
	printf("5: %c\n", String[5]);
	printf("6: %c\n", String[6]);
	printf("7: %c\n", String[7]);
	printf("8: %c\n", String[8]);
	printf("9: %c\n", String[9]);
}

void find_null(void){
	unsigned long j;
	for(j = 0; j < 10; j++){
		if(String[j] == '\0'){
			printf("Found null at: %lu \n", j);
		}
	}
}

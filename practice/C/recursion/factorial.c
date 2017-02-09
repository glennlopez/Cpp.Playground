#include <stdio.h>
unsigned long factorial(unsigned long n);

int main(){ unsigned long result, usrNum;

	//get input from user
	printf("Get factorial of: ");
	scanf("%lu", &usrNum);

	//calculate factorial
	result = factorial(usrNum);
	printf("%lu\n", result);

	printf("\n");	//newline
	return 0;
}


unsigned long factorial(unsigned long n){
	//base case
	if(n == 1){
		printf("1 = ");
		return 1;
	}
	else{
		printf("%lu x ", n);
		return (n * (factorial(n - 1)));
	}
}

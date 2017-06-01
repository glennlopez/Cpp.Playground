/*
	calculate the sum of a string
		ie: 123 = 1 + 2 + 3 = 6
*/
#include <stdio.h>


int main(){ unsigned int uNum, buffer;

	uNum = 123;
	buffer = uNum % 10;
	uNum = uNum / 10;


	printf("uNum: %i\n", uNum);
	printf("buffer: %i\n", buffer);

	printf("\n");		//newline
	return 0;
}

#include <stdio.h>

int main(){

	//rows,columns
	int glenn[2][3] = {
		{1,2,3},		//row1
		{8,9,10}		//row2
		//3 columns
	};

	printf("Row = 1 Col = 2): %i", glenn[0][1]);	//2
	printf("Row = 2 Col = 1): %i", glenn[1][0]);	//8


	printf("\n");
	return 0;
}

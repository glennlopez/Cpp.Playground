#include <stdio.h>

int main(){

	//rows,columns
	int glenn[2][3] = {
		{1,2,3},		//row1
		{4,5,6}		//row2
		//3 columns
	};

	printf("Row = 1 Col = 2): %i\n", glenn[0][1]);	//2
	printf("Row = 2 Col = 1): %i\n", glenn[1][0]);	//8
	printf("\n"); //newline




	//loop through the matrix
	int i;
	for(i = 0; i < 2; i++){			//row

		int j,x;
		x = 0;
		for(j = 0; j < 3; j++){		//column

			printf("%i", glenn[i][j]);

		}

		//New line after 3 rows
		while(x < 3){
			x++;
			if(x = 2){
				printf("\n"); //newline
				break;
			}
		}
	}


	printf("\n");
	return 0;
}

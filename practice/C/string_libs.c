#include <stdio.h>
#include <string.h>

char myArray1[10] = {'H','e','l','l','o','\0'};
char myArray2[11] = {'W','o','r','l','d','\0'};

int i;

int main(){

	i = 0;
	while(myArray1[i] != '\0'){
		printf("%c", myArray1[i]);
		i++;
	}

	//STRCPY()
	strcpy(myArray2, myArray1);


	i = 0;
	while(myArray2[i] != '\0'){
		printf("%c", myArray2[i]);
		i++;
	}



	printf("\n");
	return 0;
}

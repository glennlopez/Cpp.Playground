#include <stdio.h>
// https://www.tutorialspoint.com/cprogramming/c_strings.htm
// https://youtu.be/denGqylqjo4

int main(){

	int i, count;
	char myArray[12] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};

	count = 0;
	for(i = 0; i < 12; i++){
		printf("%c", myArray[i]);
		if(myArray[i] == 'l'){
			count++;
		}
	} printf("\n");



	printf("The letter L shows up this many times: %i\n", count);


	printf("\n");
	return 0;
}

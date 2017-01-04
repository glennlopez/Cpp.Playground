#include <stdio.h>
// https://www.tutorialspoint.com/cprogramming/c_strings.htm
// https://youtu.be/denGqylqjo4

int main(){

	int i, count, size;
	char myArray[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};

	//count how many letters are in an array of strings
	size = 0;
	while(1){
		if(myArray[size] == '\0'){
			break;
		}
		size++;
	}

	printf("There are %i letters in the array that holds: ", (size+1));

	count = 0;
	for(i = 0; i < (size+1); i++){
		printf("%c", myArray[i]);
		if(myArray[i] == 'l'){
			count++;
		}
	} printf("\n");



	printf("The letter 'l' shows up %i many times.\n", count);


	printf("\n");
	return 0;
}

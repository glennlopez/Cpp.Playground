#include <stdio.h>
//https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm

int main(){

	int myArray[8] = {5,190,-12,1011,2,-1,0,900};
	int largestNum, smallestNum, i;

	//vars set to max val to avoid iteration bugs
	smallestNum = 99999999;	//set to max val
	largestNum = -99999999;	//set to max val

	for(i = 0; i < 8; i++){
		if(myArray[i] > largestNum){
			largestNum = myArray[i];
		}
		if(myArray[i] < smallestNum){
			smallestNum = myArray[i];
		}
	}

	printf("The largest number in the array is: %i ", largestNum); printf(" \n");	//new line
	printf("The smallestNum number in the array is: %i ", smallestNum);

	printf(" \n");	//new line
	return 0;
}

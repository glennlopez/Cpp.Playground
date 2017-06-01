#include <stdio.h>
#include <stdlib.h>
#include "struct.h"	//include the struct.h

int main(){

	//use the "user" struct
	struct user gary;
	struct user ash;

	//dot operator for accessing structure memebers
	gary.userID = 1;
	ash.userID = 2;

	printf("Gary's user ID is: %i\n", gary.userID);
	printf("Ash's user ID is: %i\n", ash.userID);

	printf("\n");
	return 0;
}

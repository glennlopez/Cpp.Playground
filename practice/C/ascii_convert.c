//a simple number to ascii conversion
#include <stdio.h>
/*
	Convert 123 (ascii char) to (ascii hex)
	ie: 123 = 0x31, 0x32, 0x33
*/

int main(){
	unsigned int usrNum, buffer, count;


	printf("Number: ");
	scanf("%i", &usrNum);

	//count number numbers
	while(usrNum != '\0'){
		count++;
	}

	buffer = usrNum % 10;
	usrNum = usrNum / 10;

	//debug output
	printf("usrNum: %i \n", usrNum);
	printf("Buffer: %i \n", buffer);
	printf("Count: %i \n", count);

	printf("\n");	//newline
	return 0;
}

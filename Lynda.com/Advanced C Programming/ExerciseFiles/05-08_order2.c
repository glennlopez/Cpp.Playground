#include <stdio.h>

int main()
{
	int a,b;

	a = b = 10;
	printf("a   = %d\tb   = %d\n",a,b);
	printf("a++ = %d\t++b = %d\n",a++,++b);
	printf("a   = %d\tb   = %d\n",a,b);

	return(0);
}


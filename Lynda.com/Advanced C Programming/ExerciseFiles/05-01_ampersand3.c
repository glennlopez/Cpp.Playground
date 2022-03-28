#include <stdio.h>

int main()
{
	int a[10],*ptra;

	ptra = a;
	printf("Address of a = %p\n",a);
	printf("Address of a = %p\n",&a);
	printf("Pointer ptra = %p\n",ptra);

	return(0);
}


#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	float aroot;

	printf("Type an integer: ");
	scanf("%d",&a);
	aroot = sqrt(a);
	printf("The square root of %d is %f\n",a,aroot);

	return(0);
}


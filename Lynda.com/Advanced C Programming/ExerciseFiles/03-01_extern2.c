#include <stdio.h>

int x;

void f(void)
{
	x = -1;
	printf("In function f() x = %d\n",x);
}

int main()
{
	x = 0;
	printf("In the main() function x = %d\n",x);
	f();
	printf("In the main() function x = %d\n",x);

	return(0);
}


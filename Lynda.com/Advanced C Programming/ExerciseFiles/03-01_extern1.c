#include <stdio.h>

void f(void)
{
	int x = -1;

	printf("In function f() x = %d\n",x);
}

int main()
{
	int x = 0;

	printf("In the main() function x = %d\n",x);
	f();
	printf("In the main() function x = %d\n",x);

	return(0);
}

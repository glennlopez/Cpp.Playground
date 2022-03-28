#include <stdio.h>

int main()
{
	int f[5] = { 13, 21, 34, 55, 89 };
	int x;
	int *pf;

	pf = f;
	for(x=0;x<5;x++)
	{
		printf("%d\n",*(pf+x));
	}

	return(0);
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generate(void);

int main()
{
	int x;
	int *a;

	puts("Here are 10 random numbers:");
	a = generate();
	for(x=0;x<10;x++)
		printf(" %3d",a[x]);
	putchar('\n');

	return(0);
}

int *generate(void)
{
	static int array[10];
	int x;

	srand((unsigned)time(NULL));
	for(x=0;x<10;x++)
		array[x] = rand() % 100 + 1;

	return(array);
}


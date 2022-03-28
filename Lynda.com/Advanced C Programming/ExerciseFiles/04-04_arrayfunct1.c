#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void populate(int a[]);
void showArray(int *a);
void sortArray(int *a);

int main()
{
	int numbers[SIZE];

/* populate the array */
	populate(numbers);

/* Display the unsorted array */
	puts("Unsorted array:");
	showArray(numbers);

/* Sort the array */
	sortArray(numbers);

/* Display the sorted array */
	puts("Sorted array:");
	showArray(numbers);

	return(0);
}

void populate(int *a)
{
	int x;

	srand((unsigned)time(NULL));
	for(x=0;x<SIZE;x++)
		a[x] = rand() % 100 + 1;
}

void showArray(int *a)
{
	int x;

	for(x=0;x<SIZE;x++)
		printf(" %3d",a[x]);
	putchar('\n');
}

void sortArray(int *a)
{
	int inner,outer,temp;

	for(inner=0;inner<SIZE;inner++)
		for(outer=inner+1;outer<SIZE;outer++)
		{
			if( a[inner] > a[outer])
			{
				temp = a[inner];
				a[inner] = a[outer];
				a[outer] = temp;
			}
		}
}


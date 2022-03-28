#include <stdio.h>

int main()
{
	struct weather {
		char day[10];
		float temp;
	};
	struct weather today = { "Sunday", 72.5 };

	puts("Today's forecast:");
	printf("%10s %.1f degrees\n",
			today.day,
			today.temp);

	return(0);
}


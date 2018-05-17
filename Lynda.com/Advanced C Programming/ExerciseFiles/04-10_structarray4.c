#include <stdio.h>

int main()
{
	struct weather {
		char day[10];
		float temp;
	};
	struct weather week[7] = {
		{ "Sunday", 72.5 },
		{ "Monday", 68.4 },
		{ "Tuesday", 75.0 },
		{ "Wednesday", 73.8 },
		{ "Thursday", 65.1 },
		{ "Friday", 72.8 },
		{ "Saturday", 75.2 }
	};
	int x;

	week[1] = week[5];

	puts("This week's forecast:");
	for(x=0;x<7;x++)
		printf("%10s %.1f degrees\n",
				week[x].day,
				week[x].temp);

	return(0);
}


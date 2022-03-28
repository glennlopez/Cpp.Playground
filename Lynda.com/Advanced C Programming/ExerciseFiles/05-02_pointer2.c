#include <stdio.h>

int main()
{
	char string[] = "Greetings from the digital realm!\n";
	char *s;

	s = string;
	while(*s)
	{
		putchar( ++*s );
		s++;
	}

	return(0);
}


#include <stdio.h>
#include <string.h>

void showStruct(struct person p);

int main()
{
	struct person {
		char name[32];
		int age;
		float iq;
	};
	struct person author;

	strcpy(author.name,"Dan Gookin");
	author.age = 54;
	author.iq = 287.5;

	showStruct(author);

	return(0);
}

void showStruct(struct person p)
{
	printf("Author %s is %d years old\n",
			p.name,
			p.age);
	printf("%s has an IQ of %.1f\n",
			p.name,
			p.iq);
}


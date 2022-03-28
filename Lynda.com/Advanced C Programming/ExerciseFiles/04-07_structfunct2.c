#include <stdio.h>
#include <string.h>

struct person {
	char name[32];
	int age;
	float iq;
};

struct person fetchStruct(void);
void showStruct(struct person p);

int main()
{
	showStruct(fetchStruct());
	return(0);
}

struct person fetchStruct(void)
{
	static struct person author;

	strcpy(author.name,"Dan Gookin");
	author.age = 54;
	author.iq = 287.5;

	return(author);
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


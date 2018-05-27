/*
    Challenge Objective:
        [] Create two functions:
            - one to fill the struct 
            - another to display the data
        [] have the structures member include:
            - name
            - age
        [] promt the user to enter thier name and age and display the results
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char name[32];
    int age;
} userdata;

userdata *fillstruct(void);
void displayStruct(userdata *);
void fetchStruct(userdata *p);

int main(){

    userdata *new_user;

    new_user = fillstruct();
    fetchStruct(new_user);
    displayStruct(new_user);

    printf("\n");
    return 0;
}


/****************
    SUBROUTINES
*****************/



userdata *fillstruct(void)
{
    userdata *p;

    p = (userdata*)malloc(sizeof(userdata));
    if( p == NULL)
	{
		perror("Unable to allocate structure");
		exit(1);
	}
    return (p);
}

void fetchStruct(userdata *p)
{
	strcpy(p->name,"Dan Gookin");
	p->age = 54;
}

void displayStruct(userdata *data)
{
    printf("\n");
    printf("Name: %s\n", data->name);
    printf("Age: %i\n", data->age);
}
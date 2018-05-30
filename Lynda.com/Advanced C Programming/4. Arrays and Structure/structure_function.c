 /*
    Challenge Objective:
        Code two functions that:
            [] Fill struct data with data
            [] Displays struct data
        Struct members must have:
            [] Name
            [] Age

    Prompt the user to enter thier name and age.
    Then display the results
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[30];
    int age;
} person;

void fillStruct(person *p);
void displayStruct(person *p);
int num;


int main()
{

    // prompt user number of person
    printf("How many people: ");
    scanf("%d", &num);

    // allocate to heap - retain data till free
    person *ptr;
    ptr = malloc(num * sizeof(person));

    // Fill struct data
    fillStruct(ptr);

    // Display struct data
    displayStruct(ptr);

    // free allocated memory 
    free(ptr);

    printf("\n");
    return 0;
}




/****************
    SUBROUTINES
*****************/


// fill the struct
void fillStruct(person *p)
{
    for(int i = 0; i < num ; i++)
    {
        printf("Enter Name: ");
        scanf("%s", p[i].name);
    }
}


// display the stuct
void displayStruct(person *p)
{
    for(int i = 0; i < num; i++)
    {
        printf("Name: %s\n", p[i].name);
    }
}
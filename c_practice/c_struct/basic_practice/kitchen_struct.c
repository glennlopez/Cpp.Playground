//https://www.programiz.com/c-programming/c-structures

#include <stdio.h>
#include <string.h>

// define a custom datatype group using structs (no memory is allocated)
typedef struct{
    char name[32];
    int birthYear;
    double skill;
} person;

void displayData(person);



int main(){

    int numOfCooks = 2;

    // allocate memory in the stack for custom datatype 
    person masterChef, cook[numOfCooks];

    // add values to masterChef
    strcpy(masterChef.name, "Chef Name");
    masterChef.birthYear = 1992;
    masterChef.skill = 92.20;

    // add values to cook[0]
    strcpy(cook[0].name, "Cook1 Name");
    cook[0].birthYear = 1998;
    cook[0].skill = 60.20;

    // display master chef data
    displayData(masterChef);

    // display cooks data
    for(int i = 0; i < numOfCooks; i++)
    {
        displayData(cook[i]);
    }

    printf("\n");
    return 0;
}



void displayData(person data)
{
    printf("Name: %s\n", data.name);
    printf("Birth Year: %i\n", data.birthYear);
    printf("Experiance: %1.2f\n", data.skill);
    printf("\n");
}



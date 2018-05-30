#include <stdio.h>
#include <string.h>

/*
    Referencing pointer to another address to access the memory
*/

typedef struct
{
    int age;
    float weight;
} person;

int main()
{

    person *personPtr; 
    person person1;

    personPtr = &person1; // personPtr --> person1

    // User Prompts
    printf("Enter age (&personPtr): ");
    //scanf("%d", &(*personPtr).age); 
    scanf("%d", &personPtr->age); //the same as (*person).age

    //printf("Enter age (&person1): ");
    //scanf("%d", &person1.age);



    // Display results
    printf("Age (person1): %d\n", person1.age);
    printf("Age (*personPtr): %d\n", (*personPtr).age);




    printf("\n");
    return 0;
}
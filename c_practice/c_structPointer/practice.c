#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    Accessing structure member through pointer using dynamic memory allocation
*/

typedef struct
{
    int age;
    float weight;
    char name[30];
} person;

int main()
{
    int num = 2;
    person *ptr;

    // Place struct data to heap memory
    ptr = malloc(num * sizeof(person));

    // Prompt user for data
    for(int i = 0; i < num; i++)
    {
        printf("Enter age: ");
        //scanf("%d", &(*(ptr+i)).age);
        //scanf("%d", &(ptr+i)->age);
        scanf("%d", &ptr[i].age);
    }

    // Display data
    for(int i = 0; i < num; i++)
    {
        printf("Age: %d\n", ptr[i].age);
    }


    printf("\n");
    return 0;
}
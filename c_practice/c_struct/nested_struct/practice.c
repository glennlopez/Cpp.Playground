#include <stdio.h>
#include <string.h>


// child struct
typedef struct
{
    double  food,
            medical,
            license,
            other;
} costInfo;

// parent struct
typedef struct{
    char name[32];
    char type[32];
    int age;
    costInfo cost;
} petInfo;



int main()
{
    // Define a petInfo structure variable
    petInfo pet001;

    // Assigning values to petInfo variables
    strcpy(pet001.name, "Garfield");
    strcpy(pet001.type, "Cat");
    pet001.age = 1;

    // DEBUG - Display all values 
    printf("Pet Name: %s\n", pet001.name);

    // Calculate anual cost for the pet

    printf("\n");
    return 0;
}
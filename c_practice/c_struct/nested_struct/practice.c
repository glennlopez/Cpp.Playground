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
    costInfo cost; // <-- defines costInfo structure inside petInfo
} petInfo;


// prototypes
void titleUnderline(petInfo);



int main()
{
    // Define a petInfo structure variable
    petInfo pet[2];

    // Assigning values to petInfo variables
    strcpy(pet[0].name, "Garfield");
    strcpy(pet[0].type, "Cat");
    pet[0].age = 1;
    pet[0].cost.food = 20.50;
    pet[0].cost.medical = 140.11;
    pet[0].cost.license = 60.74;
    pet[0].cost.other = 11.75;

    // DEBUG - Display all values 
    printf("\n%s\n", pet[0].name);
    titleUnderline(pet[0]);
    printf("Pet type: %s\n", pet[0].type);
    printf("Age: %i\n", pet[0].age);
    printf("Age: %i\n", pet[0].age);


    // Calculate anual cost for the pet

    printf("\n");
    return 0;
}




// subroutines
void titleUnderline(petInfo param)
{
    int i;
    for(i = 0; param.name[i] != '\0'; i++)
    {
        printf("-");
    }
    printf("\n");
}
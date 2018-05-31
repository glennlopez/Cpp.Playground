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
void displayPetInfo(petInfo param);
void populatePetInfo(petInfo param);



int main()
{
    // TODO: Ask user how many pets

    // Number of pets
    int petAmt = 1;

    // Define a petInfo structure variable
    petInfo pet[petAmt];

    /*
    // Assigning values to petInfo variables
    strcpy(pet[0].name, "Garfield");
    strcpy(pet[0].type, "Cat");
    pet[0].age = 1;
    pet[0].cost.food = 20.50;
    pet[0].cost.medical = 140.11;
    pet[0].cost.license = 60.74;
    pet[0].cost.other = 11.75;
    */

    // Populate pet values
    for(int i = 0; i < petAmt; i++)
    {
        printf("Pet #%i\n", i+1);
        populatePetInfo(pet[i]);
        printf("\n");
    }

    // Display pet values
    for(int i = 0; i < petAmt; i++)
    {
        displayPetInfo(pet[i]);
    }
    

    // TODO:Calculate anual cost for the pet

    printf("\n");
    return 0;
}




// Subroutines
void titleUnderline(petInfo param)
{
    int i;
    for(i = 0; param.name[i] != '\0'; i++)
    {
        printf("-");
    }
    printf("\n");
}

void displayPetInfo(petInfo param)
{
    printf("\n%s\n", param.name);
    titleUnderline(param);
    printf("pet type: %s\n", param.type);
    printf("Age: %i\n", param.age);
    printf("Food: $%1.2f\n", param.cost.food);
    printf("Medical: $%1.2f\n", param.cost.medical);
    printf("License: $%1.2f\n", param.cost.license);
    printf("Other Costs: $%1.2f\n", param.cost.other);
}

void populatePetInfo(petInfo param)
{   
    char petName[32];
    char petType[32];
    printf("Enter pets name: ");
    scanf("%s", petName);
    printf("Enter pet type: ");
    scanf("%s", petType);
    strcpy(param.name, petName);
    strcpy(param.type, petType);
    printf("Enter pet age: ");
    scanf("%d", &param.age);
    printf("Food cost: ");
    scanf("%lf", &param.cost.food);
    printf("Medical cost: ");
    scanf("%lf", &param.cost.medical);
    printf("License cost: ");
    scanf("%lf", &param.cost.license);
    printf("Other cost: ");
    scanf("%lf", &param.cost.other);
}
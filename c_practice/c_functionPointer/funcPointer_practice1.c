#include <stdio.h>

void voidFunc1();
void voidFunc2();
int add(int a, int b);
int multiply(int a, int b);


/* MAIN */
int main ()
{
    // Pointer function definition
    int (*ptr)(int, int) = add;

    // Pointer function called
    int result = ptr(2,2);
    printf("results: %d", result);
    
}


/* FUNCTIONS */
void voidFunc1()
{
    printf("This is a void function\n");
}

void voidFunc2()
{
    printf("This is another void function\n");
}

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}
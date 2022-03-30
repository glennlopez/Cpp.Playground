/* Function Pointers: with arguments
 * https://www.youtube.com/watch?v=BRsv3ZXoHto
 */

#define PTRFUNC int(*out)(int, int) // defined macro

#include <stdio.h>

// prototypes
int add (int a, int b);
int multiply(int a, int b);

int main ()
{

    // <return type> <pointer name> <argument signature> = function to point to
    //int (*out)(int, int) = &add;
    int (*out)(int, int) = &multiply;
    //PTRFUNC = &multiply;  // macro

    printf("Pointer function returns: %d\n", out(10, 10));

}

/* FUNCTIONS TO POINT TO - WITH ARGUMENTS */
int add (int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}


/* Function Pointers: void arguments
 * https://www.youtube.com/watch?v=BRsv3ZXoHto
 */
#include <stdio.h>

// prototypes
void hello(void);
void world(void);

int main ()
{
    // <return type> <pointer name> <argument signature> = function to point to
    //void (*ptr1)(void) = &world;
    void (*ptr1)(void) = &hello;

    ptr1(); // this will run the pointer that points to the &function
}


/* FUNCTIONS TO POINT TO */
void hello(void)
{
    printf("foo\n");
}

void world(void)
{
    printf("bar\n");
}
#include <stdio.h>

void foo();
void bar();



int main ()
{
    // define function pointers
    void (*ptr)(void) = &foo;

    // call the function pointer
    ptr();

    return 0;
}




void foo()
{
    printf("Hello from foo\n");
}

void bar()
{
    printf("Hello from bar\n");
}


//https://www.youtube.com/watch?v=zuegQmMdy8M
//https://www.youtube.com/watch?v=q24-QTbKQS8
#include <stdio.h>

struct Person
{
    char name[260];
    int age;
};

typedef struct Person person;

int main()
{
    int a = 11;
    int b = 22;
    int *c = &a;

    *c = 31;

    printf("a address: %p\n", &a);
    printf("b address: %p\n", &b);
    printf("c address: %p\n", &c);
    printf("\n");
    printf("a: %i\n", a);
    printf("b: %i\n", b);
    printf("c: %i\n", *c);
    
        

}

#include <stdio.h>

int main()
{

    int a;
    char b;
    double c;
    float d;
    //----------
    int x;
    int *ptrX;
    ptrX = &x;
    //----------
    int y[10];
    int *ptrY;
    ptrY = y;


    printf("The address of a (int): %p\n", &a);
    printf("The address of b (char): %p\n", &b);
    printf("The address of c (double): %p\n", &c);
    printf("The address of d (float): %p\n", &d);
    printf("\n");
    printf("The address of x (int): %p\n", &x);
    printf("The address of ptr (pointer): %p\n", ptrX);
    printf("\n");
    printf("The address of ptrY (pointer): %p\n", ptrY);
    printf("The address of *y (pointer): %p\n", y);
    printf("The address of y[0] (int arr): %p\n", &y[0]);
    printf("The address of y[1] (int arr): %p\n", &y[1]);
    printf("The address of y[2] (int arr): %p\n", &y[2]);
    printf("\n");
    

    printf("\n");
    return 0;
}
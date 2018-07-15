#include <stdio.h>

int main()
{

    char *string = "this is a string test";

    // print the string 
    /*
    while(putchar(*string) != '\0')
        string++;
    printf("\n");
    */

    //for(; putchar(*string) != '\0'; string++);

    int num = 0;
    while(num++ != 10)
        printf("num: %i\n", num);

    while(putchar(*string++) != '\0');

    /*
    // print A-Z
    for(char ch = 'A'; ch != 'Z'; ch++)
        putchar(ch);
    printf("\n");

    // print a-Z
    for(char ch = 'A'; ch != 'z'; ch++)
        putchar(ch);
    printf("\n");
    */

    printf("\n");
    return 0;
}
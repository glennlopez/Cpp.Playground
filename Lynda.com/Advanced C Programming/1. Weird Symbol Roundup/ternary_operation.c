/*
    Challenge Objective:
        [] Use the ternary operator
        [] Fetch a positive integer greater than zero
        [] Report whether that input is odd or even
*/

// solution: https://www.lynda.com/C-tutorials/Solution-ternary-operator-decision/195668/369004-4.html

#include <stdio.h>
#include <string.h>

int main(){

    // Fetcha  positive integer greater than zero
    int usrVar = -999;
    while(usrVar < 0)
    {
        printf("Positive Number: ");
        scanf("%i", &usrVar);
    }

    // Report whether that input is odd or even
    printf("%i is: %s ", usrVar, (usrVar % 2)? "odd":"even" );

    printf("\n");
    return 0;
}

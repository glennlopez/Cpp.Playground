/*
    Challenge Objective:
        [] Fetch a value from input and modify input
        [] Multiply it by 5 and display the result
        [] Divide the result by 3 and display that result
*/

// solution: https://www.lynda.com/C-tutorials/Solution-Use-assignment-operator/195668/369001-4.html

#include <stdio.h>

int main(){
    double usrVar = 0.0;

    // Fetch a value from input
    printf("Number: ");
    scanf("%lf", &usrVar);

    // Multiply it by 5
    usrVar *= 5.0;

    // Display results
    printf("Multiplied by 5: %f\n", usrVar);

    // Divide the result by 3
    usrVar /= 3.0;

    // Display the result
    printf("Divided by 3: %f\n", usrVar);

    printf("\n");
    return 0;
}
 /*
    Challenge Objective:
        [] Prompt the user to input an integer
        [] Store the value input
        [] Display the integer as a floating point value 
            using the format n.n
*/

// solution: https://www.lynda.com/C-tutorials/Solution-Specifying-cast/195668/369013-4.html

#include <stdio.h>
#include <string.h>

int main(){

    // Prompt the user
    int input; 
    printf("Input Int: ");
    scanf("%i", &input);

    // Display the int as a float
    printf("Float: %.1f", (float)input);


    printf("\n");
    return 0;
}
#include <stdio.h>

//TODO: debug this so that Count and Final number is the same number when the code finishes running
int main() {
    int i;

    for (i = 0; i <= 10; i++)
    {
        printf("Count: %i\n", i);
    }

    printf("Final number is: %i \n", i);
    printf("This is a test for LiveShare\n");
    printf("Another test...\n");
    
    // calculate factorial of an integer - copilot test
    int n = 10;
    int factorial = 1;
    for (int j = 1; j <= n; j++)
    {
        factorial *= j;
    }
    printf("Factorial of %i is %i\n", n, factorial);
    
    //check if a number is prime or not - copilot test
    int num = factorial;
    int isPrime = 1;
    for (int k = 2; k < num; k++)
    {
        if (num % k == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        printf("%i is a prime number\n", num);
    }
    else
    {
        printf("%i is not a prime number\n", num);
    }
    
}
#include <stdio.h>

int main() 
{
    // simple hello world
    printf("Hello World!\n");

    // ask the user for a number and store it in userNum
    int userNum; 
    printf("Enter a number: ");
    scanf("%d", &userNum);

    // take userNum and calculate the factorial of it
    int factorial = 1;
    for (int i = 1; i <= userNum; i++) {
        factorial *= i;
    }

    // print the factorial
    printf("The factorial of %d is %d\n", userNum, factorial);

    // check if the factorial is even or odd
    if (factorial % 2 == 0) {
        printf("The factorial is even\n");
    } else {
        printf("The factorial is odd\n");
    }   

    // check if the factorial is prime and print the result
    int isPrime = 1;
    for (int i = 2; i < factorial; i++) {
        if (factorial % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("The factorial is prime\n");
    } else {
        printf("The factorial is not prime\n");
    }

    // check if the factorial is a perfect square and print the result
    int isPerfectSquare = 0;
    for (int i = 1; i <= factorial; i++) {
        if (i * i == factorial) {
            isPerfectSquare = 1;
            break;
        }
    }
    if (isPerfectSquare) {
        printf("The factorial is a perfect square\n");
    } else {
        printf("The factorial is not a perfect square\n");
    }

    // check if the factorial is a palindrome and print the result
    int isPalindrome = 1;
    int num = factorial;
    int reverse = 0;
    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    if (factorial != reverse) {
        isPalindrome = 0;
    }
    if (isPalindrome) {
        printf("The factorial is a palindrome\n");
    } else {
        printf("The factorial is not a palindrome\n");
    }


}
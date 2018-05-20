 /*
    Challenge Objective:
        [] Write a function that returns an int array
        [] Have the array hold the values 2, 3, 5, 7, and 11
        [] Display the values in the main() function
*/

// solution: 

#include <stdio.h>
#include <string.h>

int staticVariable(void);
int normalVariable(void);
int *primeNums(void);

int main(){

    int staticArr[5];
    
    // testing static variable retention
    staticVariable();
    staticVariable();
    staticVariable();
    printf("staticVar: %i\n", staticVariable());

    // testing normal variable retention
    normalVariable();
    normalVariable();
    normalVariable();
    printf("normalVar: %i\n", normalVariable());




    printf("\n---------- CHALLENGE SOLUTION ----------\n");
    int *array; //<-- pointer made
    array = primeNums(); //<-- point the array to the address of what primeNums returned (address to an array)

    //print the static array
    printf("Pointer pointing to static array: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
    }


    printf("\n");
    return 0;
}


int normalVariable(void)
{
    int normalVar = 0;
    return normalVar++;
}

int staticVariable(void)
{
    static int staticVar = 0;
    return staticVar++;
}


// CHALLENGE SOLUTION
int *primeNums(void) //<-- int * returns a pointer address
{
    //int p[5] = {2, 3, 5, 7, 11};
    static int p[5] = {2, 3, 5, 7, 11}; //<-- static = do not discard the array when function is done
    return (p); // <-- return the address NOT the array
}
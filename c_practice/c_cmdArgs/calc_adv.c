#include <stdio.h>
#include <cs50.h>
/*
HOW THE FUNCTIONS WORK:
    If 167 is the input digit then:
        1 = 10^2 * 1    = powerFunc(numCount1 - 1) * (argv[1][i] - 48)
        6 = 10^1 * 6    = powerFunc(numCount1 - 1) * (argv[1][i] - 48)
        7 = 10^0 * 7    = powerFunc(numCount1 - 1) * (argv[1][i] - 48)

    removing 48 removes the ASCII index from the char
    powerFunc is a math function for finding powers of n
*/

//POWER FUNCTION
int powerFunc(int param){   int result = 1;

    for(int i = 0; i < param; i++){
        result *= 10;
    }

    return result;
}




//MAIN FUNCTION
int main(int argc, char *argv[]){
    int numTotal1 = 0;
    //int numTotal1 = 0;

    int numCount1 = 0;
    //int numCount2 = 0;

    if(argc == 2){

        //count how many digits in first argument
        for(int i = 0; argv[1][i] != '\0'; i++){
            numCount1++;
            numTotal1 += powerFunc(numCount1 - 1) * (argv[1][i] - 48);

            //FIXME: Output the result below into an integer
            printf("Power Function: %i\n", powerFunc(numCount1 - 1) * (argv[1][i] - 48));
        }

        printf("Digit count: %i\n", numCount1);
        printf("Debug: %i\n", (int)argv[1][0] - 48);
        printf("NumTotal: %i\n", numTotal1);
    }

    //incorrect argument count
    else{
        printf("Bad input\n");
    }

    printf("\n");
    return 0;
}

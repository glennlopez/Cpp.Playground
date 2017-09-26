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

//CONVERT STRING TO INT




//MAIN FUNCTION
int main(int argc, char *argv[]){

    if(argc == 2){
        //debug
        printf("PowerFunc: %i", powerFunc(1));

    }

    //incorrect argument count
    else{
        printf("Bad input\n");
    }

    printf("\n");
    return 0;
}

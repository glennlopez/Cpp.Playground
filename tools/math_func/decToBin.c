#include <stdio.h>
void convert(int);

//MAIN ROUTINE
int main(){

    convert(192);
    convert(168);
    convert(1);
    convert(2);

    printf("\n");
    return 0;
}


//DECIMAL TO BINARY SUBROUTINE
void convert(int param){
    int uNum = param;      //user decimal input
    int uBin[32];       //binary conversion storage
    int count = 0;      //used for indexing array

    //FIXME: re-code to use recursive
    //          add leading zeroes for AND/OR function

    if(uNum == 1){
        uBin[0] = 1;
    }

    while(uNum != 1){
        if(uNum % 2){
            uBin[count] = 1;
        }
        else{
            uBin[count] = 0;
        }

        uNum /= 2;

        if(uNum == 1){
            uBin[count + 1] = 1;
        }

        count++;
    }

    for(int i = count; i >= 0; i--){
        printf("%i", uBin[i]);

    }

    //DEBUG - dot delimiter
    printf(".");
}

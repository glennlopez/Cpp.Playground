#include <stdio.h>
const int ARRSIZE = 10;
void printArr(int param[]);

int main(){

    int solution[ARRSIZE] = {1,6,7,6,4,7,7,3,6,1};
    int usedNums[ARRSIZE] = {};

    //track used numbers
    int notEqual = 0;
    int usedNumIndex = 0;
    for(int sol_x = 0; sol_x < ARRSIZE; sol_x++){

        notEqual = 0;   //resets counter every loop
        for(int i = 0; i < ARRSIZE; i++){
            printf("%i ",usedNums[i]);

            // count frequency on non-equal numbers
            if(solution[sol_x] != usedNums[i]){
                notEqual++;
            }

            // assume number is unique
            if(notEqual == ARRSIZE){
                usedNums[usedNumIndex] = solution[sol_x];
                usedNumIndex++;
            }

        }
        printf("notEqual: %i\n", notEqual);
        printf("\n");
    }










/*
    //store used variables
    int usedArrIndex = 0;
    int notFoundCounter = 0;
    for(int x = 0; x < MATRIX_SIZE*MATRIX_SIZE; x++){
        for(int i = 0; i < MATRIX_SIZE; i++){
            for(int j = 0; j < MATRIX_SIZE; j++){
                printf("%i ", solution[i][j]);
                //printf("notFoundCounter: %i\n", notFoundCounter);
                //printf("usedArrIndex: %i\n", usedArrIndex);

                if(solution[i][j] != usedArr[usedArrIndex]){
                    usedArr[usedArrIndex] = solution[i][j];
                    notFoundCounter++;
                }

            }
            printf("\n");
        }
        printf("\n");
        printf("\n");

        if(notFoundCounter > 0){
            notFoundCounter = 0;
            usedArrIndex++;
        }

    }

    */
    printf("\n");



    printf("solution: ");
    printArr(solution);

    printf("usedNums: ");
    printArr(usedNums);

    printf("\n");
    return 0;
}


// print array contents
void printArr(int param[]){
    for(int i = 0; i < ARRSIZE; i++){
        printf("%i ",param[i]);
    }
    printf("\n");
}
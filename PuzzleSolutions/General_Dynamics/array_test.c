#include <stdio.h>
const int MATRIX_SIZE = 10;
void printArr(int param[]);

int main(){

    int solution[MATRIX_SIZE] = {1,6,7,6,4,7,7,1,6,1};
    int usedNums[MATRIX_SIZE] = {};

    // solution layer
    int notEqual = 0;
    int usedNumIndex = 0;
    for(int sol_x = 0; sol_x < MATRIX_SIZE; sol_x++){

        // used num layer
        notEqual = 0;
        for(int i = 0; i < MATRIX_SIZE; i++){
            printf("%i ",usedNums[i]);

            if(solution[sol_x] != usedNums[i]){
                notEqual++;
            }

            if(notEqual == MATRIX_SIZE){
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
    for(int i = 0; i < MATRIX_SIZE
    ; i++){
        printf("%i ",param[i]);
    }
    printf("\n");
}
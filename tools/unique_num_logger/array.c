#include <stdio.h>
const int MATRIX_SIZE = 3;
int solution[MATRIX_SIZE][MATRIX_SIZE] ={
        {1,9,2},
        {0,0,0},
        {0,0,0}
    };
    int usedNums[MATRIX_SIZE*MATRIX_SIZE] = {};

int main(){

    //track used numbers
    int notEqual = 0;
    int usedNumIndex = 0;
    for(int sol_x = 0; sol_x < MATRIX_SIZE; sol_x++){
        for(int j = 0; j < MATRIX_SIZE; j++){

            notEqual = 0;   //resets counter every loop
            for(int i = 0; i < MATRIX_SIZE*MATRIX_SIZE; i++){
                printf("%i ",usedNums[i]);

                // count frequency on non-equal numbers
                if(solution[j][sol_x] != usedNums[i]){
                    notEqual++;
                }

                // assume number is unique
                if(notEqual == MATRIX_SIZE*MATRIX_SIZE){
                    usedNums[usedNumIndex] = solution[j][sol_x];
                    usedNumIndex++;
                }

            }
            printf("notEqual: %i\n", notEqual);
            printf("\n");

        }

    }
    printf("\n");



    printf("solution: \n");
    for(int i = 0; i < MATRIX_SIZE; i++){
        for(int j = 0; j < MATRIX_SIZE; j++){
            printf("%i ",solution[i][j]);
        }
        printf("\n");
    }
    printf("\n");



    printf("usedNums: ");
    for(int i = 0; i < MATRIX_SIZE*MATRIX_SIZE; i++){
        printf("%i ",usedNums[i]);
    }
    printf("\n");

    printf("\n");
    return 0;
}
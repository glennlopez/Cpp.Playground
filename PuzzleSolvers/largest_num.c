#include <stdio.h>

//parametric values
#define MATRIX_SIZE 3                       // size of matrix 
#define CALC_VAL 730                        // (MATRIX_SIZE*MATRIX_SIZE)^MATRIX_SIZE + 1
#define MAX_Y CALC_VAL/4                    // 1/4 of possible sum combination
#define MAX_X MATRIX_SIZE
int givens[] = {
    35, 18, 19, 48, 3, 20, 32, 31, 4, '\0'    //testcase 1 :: solveable
    //11, 2, 99, 48, 17, 20, 32, 31, 4, '\0'     //testcase 2 :: unsolvable
    //12, 25, 27, 15, 30, 20, 10, 18, 23, '\0'    //testcase 3 :: solveable
};

int largestNum (int arrParam[]);

int main(){

    printf("largestNum: %i\n", largestNum(givens));

    printf("\n");
    return 0;
}

int largestNum (int arrParam[]){
    int largestNum = 0;
    for(int i = 0; i < MATRIX_SIZE*MATRIX_SIZE; i++){
        if(givens[i] > largestNum){
            largestNum = givens[i];
        }
    }

    return largestNum;
}
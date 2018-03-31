#include <stdio.h>
int isFloatingAvgSum(int []);

//parametric values
#define MATRIX_SIZE 3                       // size of matrix 
#define CALC_VAL 730                        // (MATRIX_SIZE*MATRIX_SIZE)^MATRIX_SIZE + 1
#define MAX_Y CALC_VAL/4                    // 1/4 of possible sum combination
#define MAX_X MATRIX_SIZE
int givens[] = {
    35, 18, 19, 48, 3, 20, 32, 31, 4, '\0'    //testcase 1 :: solveable
    //11, 2, 99, 48, 17, 20, 32, 31, 4, '\0'     //testcase 2 :: unsolvable
    //35, 18, 19, 48, 3, 20, 32, 31, 5, '\0'    //testcase 3 :: unsolveable
    //12, 25, 27, 15, 30, 20, 10, 18, 23, '\0'    //testcase 4 :: solveable
};

int main(){

    if(isFloatingAvgSum(givens)){
        printf("Floating\n");
    }

    printf("\n");
    return 0;
}

int isFloatingAvgSum(int arrParam[]){
    double AvgNumFloat = 0;
    int avgNum = 0;
    for(int i = 0; i < MATRIX_SIZE*MATRIX_SIZE; i++){
        AvgNumFloat += givens[i];
        avgNum += givens[i];
    }
    avgNum /= (MATRIX_SIZE);
    AvgNumFloat /= (MATRIX_SIZE);

    if(avgNum != AvgNumFloat){
        return 1;
    }
    else{
        return 0;
    }
}

#include <stdio.h>
/*
    General Dynamics #NEM puzzle auto-solver
        github.com/glennlopez
*/

//solver routines
int findFrqSum(int arr[]);
int updateNumTracker();

//parametric values
#define MATRIX_SIZE 3                       // size of matrix 
#define CALC_VAL 730                        // (MATRIX_SIZE*MATRIX_SIZE)^MATRIX_SIZE + 1
#define MAX_Y CALC_VAL/4                    // 1/4 of possible sum combination
#define MAX_X MATRIX_SIZE
int givens[] = {
    //35, 18, 19, 48, 3, 20, 32, 31, 4, '\0'    //testcase 1 :: solveable
    //11, 2, 99, 48, 17, 20, 32, 31, 4, '\0'     //testcase 2 :: unsolvable
    12, 25, 27, 15, 30, 20, 10, 18, 23, '\0'    //testcase 3 :: solveable
};

//store value var
int solCol[MATRIX_SIZE] = {};
int frqSum = 0;                                 // most freq sum
int mtrxSolArr[MAX_Y][MAX_X] = {};              // possible solution values
int usedNums[MATRIX_SIZE * MATRIX_SIZE] = {};
int solution[MATRIX_SIZE][MATRIX_SIZE] = {};    // solution




/*****************
 * MAIN ROUTINE
******************/
int main(){
    frqSum = findFrqSum(givens);

    // store frqSum solution in multidimentional array
    // TODO: make parametric
    // ??? how <- itterate through every possible combination with 2 loops in n*n matrix
    int frqSumCount = 0;
    for(int k = 0; givens[k] != '\0'; k++){
        for(int j = 0; givens[j] != '\0'; j++){
            for(int i = 0; givens[i] != '\0'; i++){
                if( (i != j) && (i != k) && (j != k)){
                    if(givens[k] + givens[j] + givens[i] == frqSum){
                        mtrxSolArr[frqSumCount][0] = givens[k];
                        mtrxSolArr[frqSumCount][1] = givens[j];
                        mtrxSolArr[frqSumCount][2] = givens[i];
                        frqSumCount++;
                    }
                }
            }
        }
    }
    
    // brute force solution
    // TODO: make solution[x] parametric
    // try (int arr[i]
    for(int a = 0; a < frqSumCount ; a++){
        for(int row = 0; row < MATRIX_SIZE; row++){
            solution[0][row] = mtrxSolArr[a][row];
            printf("solution[%i][%i]: %i\n",a ,row,  solution[0][row]);
        }
        printf("\n");
        for(int b = 0; b < frqSumCount ; b++){
            for(int row = 0; row < MATRIX_SIZE; row++){
                solution[1][row] = mtrxSolArr[b][row];
            }
            for(int c = 0; c < frqSumCount ; c++){
                for(int row = 0; row < MATRIX_SIZE; row++){
                    solution[2][row] = mtrxSolArr[c][row];
                }

                // calculate column value
                int offset_y = (MATRIX_SIZE - 1);
                for(int x = 0; x < MATRIX_SIZE; x++){
                    solCol[x] = 0;
                    for(int y = 0; y < MATRIX_SIZE; y++){
                        solCol[x] += solution[y][x];
                    }
                }
                if( (updateNumTracker() == MATRIX_SIZE * MATRIX_SIZE) ){
                    break;
                }
            }
        }

        // check column sum are all the same
        int columnAvg = 0;
        for(int i = 0; i < MATRIX_SIZE; i++){
            columnAvg += solCol[i];
        }
        columnAvg /= MATRIX_SIZE;
        // TODO: needs to check if solCol[0] to solCol[0-n] is equal
        if( solCol[0] == columnAvg ){ //<-- columnAvg is not enough to gate a working solution
            break;
        }
    }

    // print array
    for(int i = 0; i < frqSumCount; i++){
        for(int j = 0; j < MATRIX_SIZE; j++){
            printf("%i ", mtrxSolArr[i][j]);
        }
        printf("\n");
    }


                    
                    //DEBUG PRINT OUT
                    printf("Given Numbers:");
                    for(int i = 0; i < MATRIX_SIZE*MATRIX_SIZE; i++){
                        printf(" %i", givens[i]);
                    }
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("Solution: \n");
                    for(int j = 0; j < 3; j++){
                        for(int i = 0; i < 3; i++){
                            printf("%i ", solution[j][i]);
                        }
                        printf("\n");
                    }
                    //END DEBUG
                    

    return 0;
}



/*****************
 * SUB ROUTINES
******************/

// matrix key finder
int findFrqSum(int arr[]){
    int avg = 0;
    for(int i = 0; i < MATRIX_SIZE*MATRIX_SIZE; i++){
        avg += arr[i];
    }
    avg /= MATRIX_SIZE;
    return avg;
}

// 
int updateNumTracker(){
    //track used numbers
    //TODO: take in limited number of parameter
    int notEqual = 0;
    int usedNumIndex = 0;
    for(int sol_x = 0; sol_x < MATRIX_SIZE; sol_x++){
        for(int j = 0; j < MATRIX_SIZE; j++){

            notEqual = 0;   //resets counter every loop
            for(int i = 0; i < MATRIX_SIZE*MATRIX_SIZE; i++){

                // count frequency on non-equal numbers
                if(solution[sol_x][j] != usedNums[i]){
                    notEqual++;
                }

                // assume number is unique
                if(notEqual == MATRIX_SIZE*MATRIX_SIZE){
                    usedNums[usedNumIndex] = solution[sol_x][j];
                    usedNumIndex++;
                }
            }
        }
    }
    //printf("\n");
    for(int i = 0; i < MATRIX_SIZE*MATRIX_SIZE; i++){
        usedNums[i] = '\0';
    }
    return usedNumIndex;
}
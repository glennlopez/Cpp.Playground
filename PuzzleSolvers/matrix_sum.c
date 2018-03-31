#include <stdio.h>
//TODO: make parametric to any size matrix 
// currently only does 3x3 matrix

//solver routines
int findAvgSum(int arr[]);
int uniqueNumTracker();
int largestNum (int []);
int isFloatingAvgSum(int []);

//parametric values
#define MATRIX_SIZE 3                       // size of matrix 
#define CALC_VAL 730                        // (MATRIX_SIZE*MATRIX_SIZE)^MATRIX_SIZE + 1
#define MAX_Y CALC_VAL/4                    // 1/4 of possible sum combination
#define MAX_X MATRIX_SIZE
int givens[] = {
    35, 18, 19, 48, 3, 20, 32, 31, 4, '\0'      //testcase 1 :: solveable
    //11, 2, 99, 48, 17, 20, 32, 31, 4, '\0'      //testcase 2 :: unsolvable
    //35, 18, 19, 48, 3, 20, 32, 31, 5, '\0'      //testcase 3 :: unsolveable
    //12, 25, 27, 15, 30, 20, 10, 18, 23, '\0'    //testcase 4 :: solveable
};

//store value var
int solCol[MATRIX_SIZE] = {};
int avgSum = 0;                                 // most freq sum
int avgSumCount = 0;                            // avg sum frequency
int sumSolutionArr[MAX_Y][MAX_X] = {};          // possible solution values
int usedNums[MATRIX_SIZE * MATRIX_SIZE] = {};   // unique number used in solution
int solution[MATRIX_SIZE][MATRIX_SIZE] = {};    // solution




/*****************
 * MAIN ROUTINE
******************/
int main(){
    avgSum = findAvgSum(givens);

    // check if unsoveable
    if( (largestNum(givens) > avgSum) || (isFloatingAvgSum(givens)) ){
        printf("Unsolveable: Invalid numeric values!\n");
        return 1;
    }

    // brute force ROW solutions
    // calculate every possible sum using the given numbers
    for(int k = 0; givens[k] != '\0'; k++){
        for(int j = 0; givens[j] != '\0'; j++){
            for(int i = 0; givens[i] != '\0'; i++){

                //store combinations that sum to avgSum (no repeating numbers)
                if(k != j != i){
                    if(givens[k] + givens[j] + givens[i] == avgSum){
                        sumSolutionArr[avgSumCount][0] = givens[k];
                        sumSolutionArr[avgSumCount][1] = givens[j];
                        sumSolutionArr[avgSumCount][2] = givens[i];
                        avgSumCount++;
                    }
                }
            }
        }
    }
    
    // Brute force matrix solution using stored solutions (fixed to 3x3 matrix)
    for(int a = 0; a < avgSumCount ; a++){
        for(int row = 0; row < MATRIX_SIZE; row++){
            solution[0][row] = sumSolutionArr[a][row];
        }
        for(int b = 0; b < avgSumCount ; b++){
            for(int row = 0; row < MATRIX_SIZE; row++){
                solution[1][row] = sumSolutionArr[b][row];
            }
            for(int c = 0; c < avgSumCount ; c++){
                for(int row = 0; row < MATRIX_SIZE; row++){
                    solution[2][row] = sumSolutionArr[c][row];
                }

                // calculate column value
                int offset_y = (MATRIX_SIZE - 1);
                for(int x = 0; x < MATRIX_SIZE; x++){
                    solCol[x] = 0;
                    for(int y = 0; y < MATRIX_SIZE; y++){
                        solCol[x] += solution[y][x];
                    }
                }
                // break from loop when all numbers are unique
                if( (uniqueNumTracker() == MATRIX_SIZE * MATRIX_SIZE) ){
                    break;
                }
            }
        }

        // check column sum are all the same
        int columnAvg = 0;
        int columnEql = 1;
        for(int i = 0; i < MATRIX_SIZE; i++){
            columnAvg += solCol[i];
            if(solCol[MATRIX_SIZE - 1 ] != solCol[i]){
                columnEql = 0;
            }
        }
        columnAvg /= MATRIX_SIZE;
        if( (solCol[0] == columnAvg) && columnEql){
            break;
        }
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

// find the average of the given numbers
int findAvgSum(int arr[]){
    int avg = 0;
    for(int i = 0; i < MATRIX_SIZE*MATRIX_SIZE; i++){
        avg += arr[i];
    }
    avg /= MATRIX_SIZE;
    return avg;
}

// 
int uniqueNumTracker(){
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

// find largest number in the array
int largestNum (int arrParam[]){
    int largestNum = 0;
    for(int i = 0; i < MATRIX_SIZE*MATRIX_SIZE; i++){
        if(givens[i] > largestNum){
            largestNum = givens[i];
        }
    }

    return largestNum;
}

// check if avgsum is floating
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


void calcSums(int givenNums, int storageArr){
    //TODO
}
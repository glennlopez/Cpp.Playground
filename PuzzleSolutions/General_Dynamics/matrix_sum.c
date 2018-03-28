#include <stdio.h>
/*
    Puzzle provided by General Dynamics (#NEM puzzle).
    Challange: use as little #include overhead as possible.
        Solution by: github.com/glennlopez
*/

//solver routines
void popWithSum(int [], int [], int *);
int findFrqSum(int [], int);
int updateNumTracker();

//sorting algorythms
void insertion_sort(int [], int);
void swap(int *, int *);

//debug routines (delete later)
void printArr(int []);


//parametric var
#define CALC_VAL 730                      // (MATRIX_SIZE*MATRIX_SIZE)^MATRIX_SIZE + 1
const int MATRIX_SIZE = 3;                // size of matrix (ie: 3 = 3x3)
const int MAX_Y = CALC_VAL/4;             // 1/4 of possible sum combination
const int MAX_X = MATRIX_SIZE;
int sums[CALC_VAL] = {};
int givens[] = {
    //35, 18, 19, 48, 3, 20, 32, 31, 4, '\0'    //testcase 1 :: solveable
    //11, 2, 99, 48, 17, 20, 32, 31, 4, '\0'     //testcase 2 :: unsolvable
    12, 25, 27, 15, 30, 20, 10, 18, 23, '\0'    //testcase 3 :: solveable
};

//store value var
int solCol1 = 0;
int solCol2 = 0;
int solCol3 = 0;
int arrCount = 0;                               // number of arr stored
int frqSum = 0;                                 // most freq sum
int mtrxSolArr[MAX_Y][MAX_X] = {};              // possible solution values
int usedNums[MATRIX_SIZE * MATRIX_SIZE] = {};
int solution[MATRIX_SIZE][MATRIX_SIZE] = {};    // solution




/*****************
 * MAIN ROUTINE
******************/
int main(){
    
    popWithSum(givens, sums, &arrCount);    // populate sum array
    insertion_sort(sums, arrCount);         // sort array
    frqSum = findFrqSum(sums, arrCount);    // find most frq sum

    // store frqSum solution in multidimentional array
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
    for(int a = 0; a < frqSumCount ; a++){
        solution[0][0] = mtrxSolArr[a][0];
        solution[0][1] = mtrxSolArr[a][1];
        solution[0][2] = mtrxSolArr[a][2];
                
        for(int b = 0; b < frqSumCount ; b++){
            solution[1][0] = mtrxSolArr[b][0];
            solution[1][1] = mtrxSolArr[b][1];
            solution[1][2] = mtrxSolArr[b][2];

            for(int c = 0; c < frqSumCount ; c++){
                solution[2][0] = mtrxSolArr[c][0];
                solution[2][1] = mtrxSolArr[c][1];
                solution[2][2] = mtrxSolArr[c][2];

                // calculate column value
                // TODO: put solcol var in here
                solCol1 = solution[0][0] + solution[1][0] + solution[2][0];
                solCol2 = solution[0][1] + solution[1][1] + solution[2][1];
                solCol3 = solution[0][2] + solution[1][2] + solution[2][2];

                // when 
                if( (updateNumTracker() == MATRIX_SIZE * MATRIX_SIZE) ){
                    break;
                }
            }
        }

        // check column sum 
        // TODO: make this check parametric
        if( ((solCol1 == frqSum) && (solCol2 == frqSum) && (solCol3 == frqSum)) ){
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

                    /*
                    printf("solCol1: %i\n", solCol1);
                    printf("solCol2: %i\n", solCol2);
                    printf("solCol3: %i\n", solCol3);
                    */

                    //END DEBUG

    return 0;
}



/*****************
 * SUB ROUTINES
******************/

//populate array with sum
void popWithSum(int givenArr[], int storeArr[], int *counter){
    //populate array with sum
    for(int k = 0; givenArr[k] != '\0'; k++){
        for(int j = 0; givenArr[j] != '\0'; j++){
            for(int i = 0; givenArr[i] != '\0'; i++){
                
                if( (i != j) && (i != k) && (j != k)){
                    storeArr[*counter] = givenArr[k] + givenArr[j] + givenArr[i];
                    (*counter)++; 
                    /*
                    //output to stdout
                    printf("%i + %i + %i = %i \n", 
                    givenArr[k], givenArr[j], givenArr[i], 
                    givenArr[k] + givenArr[j] + givenArr[i]);
                    */
                }
            }
        }
    }
}

//find frequent 
//TODO: use below suggestion
/*  THIS IS DEPRICATED;
        To find frequent sum, 
        just add all the elements and divide by array size.
*/
int findFrqSum(int arr[], int param){
    int a = arr[0]; int b = arr[1];
    int sum_counter = 1; int highest_count = 0; 
    int most_frequent = 0;
    
    for(int i = 0; i <= param; i++){
        if(arr[i] != arr[i + 1]){
            int a = arr[i + 0];
            int b = arr[i + 1];

            if(sum_counter > highest_count){
                highest_count = sum_counter;
                most_frequent = arr[i];
            }
            sum_counter = 1;
        }
        else{
            sum_counter++;
        }
    }

    return most_frequent;
}

// print array contents
void printArr(int param[]){
    for(int i = 0; param[i] != '\0'; i++){
        printf("%i ",param[i]);
    }
    printf("\n");
}

//insertion sort subroutine
void insertion_sort(int paramArr[], int elementCount){
    int sdx = 0;
    int tdx = sdx + 1;

    for(int i = 0; i < elementCount; i++){
        while( (paramArr[tdx] < paramArr[tdx - 1]) && (tdx > 0) && (tdx < elementCount) ){
            swap(&paramArr[tdx], &paramArr[tdx - 1]);
            tdx--;
        }
        sdx++;
        tdx = sdx + 1;
    }
}

//swap subroutine
void swap(int *param1, int *param2){    int buffer = 0;
    buffer = *param1;
    *param1 = *param2;
    *param2 = buffer;
}

int updateNumTracker(){
    //track used numbers
    //TODO: take in limited number of parameter
    int notEqual = 0;
    int usedNumIndex = 0;
    for(int sol_x = 0; sol_x < MATRIX_SIZE; sol_x++){
        for(int j = 0; j < MATRIX_SIZE; j++){

            notEqual = 0;   //resets counter every loop
            for(int i = 0; i < MATRIX_SIZE*MATRIX_SIZE; i++){
                //printf("%i ",usedNums[i]);

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
            //printf("returns: %i\n", notEqual);
            //printf("\n");

        }

    }
    //printf("\n");
    for(int i = 0; i < MATRIX_SIZE*MATRIX_SIZE; i++){
        usedNums[i] = '\0';
    }
    return usedNumIndex;
}
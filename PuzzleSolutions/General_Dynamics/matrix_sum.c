#include <stdio.h>
/*
    Puzzle provided by General Dynamics (#NEM puzzle).
    Challange: use as little #include overhead as possible.
        Solution by: github.com/glennlopez
*/

//solver routines
void popWithSum(int [], int [], int *);
int findFrqSum(int [], int);

//debug routines
void printArr(int []);

//sorting algorythms
void insertion_sort(int [], int);
void swap(int *, int *);


/*****************
 * MAIN ROUTINE
******************/
int main(){

    const int MAX_Y = 730/4;        // this is arbritrary num
    const int MAX_X = 3;            // its a 3x3 matrix

    int solCol1, solCol2, solCol3;
    int arrCount = 0;               // track number of arr stored
    int frqSum = 0;                 // store most freq sum
    int sums[730] = {};             // 9^3 = 730 combinations
    int mtrxSolArr[MAX_Y][MAX_X] = {};
    int solution[3][3] = {};
    int givens[] = {
        35, 18, 19, 48, 3, 20, 32, 31, 4, '\0'
    };
    
    popWithSum(givens, sums, &arrCount);    // populate sum array
    insertion_sort(sums, arrCount);         // sort array
    frqSum = findFrqSum(sums, arrCount);    // find most frq sum

    // store frqSum solution in multidimentional array
    int mtrxArrCount = 0;
    for(int k = 0; givens[k] != '\0'; k++){
        for(int j = 0; givens[j] != '\0'; j++){
            for(int i = 0; givens[i] != '\0'; i++){
                if( (i != j) && (i != k) && (j != k)){
                    if(givens[k] + givens[j] + givens[i] == frqSum){
                        mtrxSolArr[mtrxArrCount][0] = givens[k];
                        mtrxSolArr[mtrxArrCount][1] = givens[j];
                        mtrxSolArr[mtrxArrCount][2] = givens[i];
                        mtrxArrCount++;
                    }
                }
            }
        }
    }
    






    // Populate solution array with initial values
    for(int k = 0; k < 3; k++){
        for(int j = 0; j < 3; j++){
            solution[j][0] = mtrxSolArr[j][0];
            solution[j][1] = mtrxSolArr[j][1];
            solution[j][2] = mtrxSolArr[j][2];
        }
    }

    // Populate solution columns with initial values
    solCol1 = solution[0][0] + solution[1][0] + solution[2][0];
    solCol2 = solution[0][1] + solution[1][1] + solution[2][1];
    solCol3 = solution[0][2] + solution[1][2] + solution[2][2];

    // Bruteforce solution
    while((solCol1 != frqSum) && (solCol2 != frqSum) && (solCol3 != frqSum)){

    }









    // DEBUG OUTPUT
    printf("Most frequent sum: %i\n", frqSum);
    printf("\n");

    //print NON-NULL multidimentional array
    for(int j = 0; j < MAX_Y; j++){
        for(int i = 0; i < MAX_X; i++){
            if(mtrxSolArr[j][i] != '\0'){
                printf("%i ", mtrxSolArr[j][i]);
            }
        }
        if(mtrxSolArr[j][0] != '\0'){
            printf("\n");
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //print NON-NULL multidimentional array
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            printf("%i ", solution[j][i]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    printf("\n");

    printf("solCol1: %i\n", solCol1);
    printf("solCol2: %i\n", solCol2);
    printf("solCol3: %i\n", solCol3);

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

                    //output to stdout
                    /*printf("%i + %i + %i = %i \n", 
                    givenArr[k], givenArr[j], givenArr[i], 
                    givenArr[k] + givenArr[j] + givenArr[i]);
                    */
                }
            }
        }
    }
}

//find frequent
int findFrqSum(int arr[], int param){
    int a = arr[0]; int b = arr[1];
    int sum_counter = 1; int highest_count = 0; 
    int most_frequent = 0;
    
    for(int i = 0; i <= param; i++){
        if(arr[i] != arr[i+1]){
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
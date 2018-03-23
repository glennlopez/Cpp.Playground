#include <stdio.h>
void printArr(int []);
void insertion_sort(int [], int);
void swap(int *param1, int *param2);

//globals
int sums[730] = {};    //9^3 possible combinations


/*****************
 * MAIN ROUTINES
******************/
int main(){

    int arrCount = 0;   // counts the number of arr stored
    int givens[] = {
        35, 18, 19, 48, 3, 20, 32, 31, 4, '\0'
    };

    //add every possible combination of numbers 9^3 = 729
    for(int k = 0; givens[k] != '\0'; k++){
        for(int j = 0; givens[j] != '\0'; j++){
            for(int i = 0; givens[i] != '\0'; i++){
                
                if( (i != j) && (i != k) && (j != k)){

                    //store to sums array
                    sums[arrCount] = givens[k] + givens[j] + givens[i];
                    arrCount++; 

                    //output to stdout
                    printf("%i + %i + %i = %i \n", 
                    givens[k], givens[j], givens[i], 
                    givens[k] + givens[j] + givens[i]);

                }

            }
        }
    }

    //sort array
    insertion_sort(sums, arrCount);

    for(int i = 0; sums[arrCount]; i++){

    }

    //debug print
    printArr(sums);
    printf("\n");

    return 0;
}



/*****************
 * SUB ROUTINES
******************/

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

    //loop through the entire array only once
    for(int i = 0; i < elementCount; i++){

        while( (paramArr[tdx] < paramArr[tdx - 1]) && (tdx > 0) && (tdx < elementCount) ){
            swap(&paramArr[tdx], &paramArr[tdx - 1]);
            tdx--;  //keeps track of where tdx is when a swap function is called
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
#include <stdio.h>
/*
    Puzzle provided by General Dynamics.
    Challange: use as little #include overhead as possible.
        Solution by: github.com/glennlopez
*/

void printArr(int []);
int findFrqSum(int);
void insertion_sort(int [], int);
void swap(int *, int *);

int sums[730] = {};    //9^3 possible combinations


/*****************
 * MAIN ROUTINE
******************/
int main(){

    int arrCount = 0;   // counts the number of arr stored
    int frqSum = 0;
    int givens[] = {
        35, 18, 19, 48, 3, 20, 32, 31, 4, '\0'
    };

    //populate array with sum
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

    insertion_sort(sums, arrCount);     // sort array
    frqSum = findFrqSum(arrCount);      // find most frequent sum

    //DEBUG OUTPUT
    printf("Most frequent sum: %i", frqSum);
    printf("\n");
    return 0;
}



/*****************
 * SUB ROUTINES
******************/

//find frequent
int findFrqSum(int param){
    int a = sums[0]; int b = sums[1];
    int sum_counter = 1; int highest_count = 0; 
    int most_frequent = 0;
    
    for(int i = 0; i <= param; i++){
        if(sums[i] != sums[i+1]){
            int a = sums[i + 0];
            int b = sums[i + 1];

            if(sum_counter > highest_count){
                highest_count = sum_counter;
                most_frequent = sums[i];
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
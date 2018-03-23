#include <stdio.h>
void printArr(int []);

//globals



/*****************
 * MAIN ROUTINES
******************/
int main(){

    int totalArr = 0;   //stores maximum array

    int givens[] = {
        35, 18, 19, 48, 3, 20, 32, 31, 4, '\0'
    };

    //if 3x3 matrix the add every possible non-dupes
    for(int k = 0; givens[k] != '\0'; k++){
        for(int j = 0; givens[j] != '\0'; j++){
            for(int i = 0; givens[i] != '\0'; i++){
                
                if( (i != j) && (i != k) && (j != k)){
                    //count total sum needed for a new array
                    totalArr++;

                    //output to stdout
                    printf("%i + %i + %i = %i \n", 
                    givens[k], givens[j], givens[i], 
                    givens[k] + givens[j] + givens[i]);

                    //store to sums array

                }

            }
        }
    }

    int sums[] = {};    //stores all values of sum

    //debug print
    printArr(sums);
    printf("Total Array: %i", totalArr);

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

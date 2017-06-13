#include<stdio.h>
#include<string.h>

int usrArr[6] = {5,2,1,3,6,4};
//int usrArr[6] = {5,2,1,3,4,6};
//int usrArr[6] = {6,2,5,3,4,1};
int totalSteps = 0;

#define ARRLEN(arr) ( sizeof(arr) / sizeof(arr[0]))

int main(){
    
    //PSEUDOCODE
        //set swap counter to a non-zero value
        //Repeat untill the swap counter is 0
            //Reset swap counter to 0
            //Look at each adjacent pair in the array
                //If the two adj pair are not ordered: 
                    //swap them 
                    //increment the swapcounter
    
    
    //BUBBLE SORT ALGORYTHM
    int swapCounter = -1;
    int buffer = -9999;
    
    do{
        swapCounter = 0;
        
        for(int i = 0; i < ARRLEN(usrArr) -1; i++){
        
            if(usrArr[i] > usrArr[i+1]){
                buffer = usrArr[i+1];       totalSteps++;
                usrArr[i+1] = usrArr[i];    totalSteps++;
                usrArr[i] = buffer;         totalSteps++;
                swapCounter++;
            }
                                            totalSteps++;
        }
        
    }while(swapCounter != 0);
    
    
    
    //print array
    for(int i = 0; i < ARRLEN(usrArr); i++){
        printf("%i ", usrArr[i]);
    }
    
    printf("\n-------\n");
    printf("Swap Counter: %i\n", swapCounter);
    printf("Arr[0]: %i\n", usrArr[0]);
    printf("Arr size: %i\n", (int)ARRLEN(usrArr));
    printf("Total Steps: %i\n", totalSteps);
    return 0;
}
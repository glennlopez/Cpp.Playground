#include <stdio.h>

//c doesnt have boolean datatypes so i need to enumerate one
typedef int bool;
enum {false, true};

//prototypes
bool isLeapYear(unsigned int); 




/*  TEST THIS ALGORYTHM:
    The following are known leap years:
        1600, 2000, 2400, 1992, 2052, 2072, 2016, 2008
*/
int main(){

    //testing isLeapYear() function
    int userInput = 0;
    printf("Enter Year: ");
    scanf("%i", &userInput);
    printf("Result: %i\n", isLeapYear(userInput));

    return 0;
}




/* 
    Description: Determines leap years
    Dependencies: required bool datatype for c-lang
*/
bool isLeapYear(unsigned int param){
    //if divisible by 4
    if( !(param % 4)){  
        //if divisible by 100
        if( !(param % 100) ){

            //if divisible by 400
            if( !(param % 400) ){   
                return true;
            }
            //not divisible by 100
            else{   
                return false;
            }

        }
        else{   //not divisible by 100
            return true;
        }
 
    }
    //not divisible by 4
    else{
        return false;
    }
}
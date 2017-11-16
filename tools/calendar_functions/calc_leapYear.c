#include <stdio.h>

//creating a new datatype (c doesnt have boolean datatypes for some reson)
typedef int bool;
enum { false, true };

//prototypes
bool isLeapYear(unsigned int); 


int main(){
    int userInput = 2010;

    printf("%i\n", isLeapYear(userInput));

    return 0;
}

/*  FIXME:

    function isLeapYear (year):
    if ((year modulo 4 is 0) and (year modulo 100 is not 0))
    or (year modulo 400 is 0)
        then true
    else false

*/
bool isLeapYear(unsigned int param){
    if( !(param % 4) ){
        return true;
    }
    else{
        return false;
    }
}
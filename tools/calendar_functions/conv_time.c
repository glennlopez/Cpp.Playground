#include <stdio.h>

//prototype
double convertSec(double, char);




int main(){

    //testing toDays();
    //double seconds = 247142594;
    double seconds = 38594;
    //double seconds = 60;
    printf("Input: %f seconds \n", seconds);
    printf("Hours: %f\n", convertSec(seconds, 'h'));

    return 0;
}



/* 
    Description: Converts seconds to ms, Min, Hours, Days
    Dependencies: none
*/
double convertSec(double seconds, char param){
    double secToMiliSec = seconds * 1000;
    double secToMin = seconds / 60;
    double minToHours = secToMin / 60;
    double hoursToDays = minToHours / 24;

    /*
        NOTE: 
        Months omited (not all months have 31 days)
        Years omited (some years are leap years)
    */

    //PARAMETER: seconds to minute
    if(param == 'x' || param == 'x'){
        return secToMiliSec;
    }

    //PARAMETER: seconds to minute
    if(param == 'm' || param == 'M'){
        return secToMin;
    }

    //PARAMETER: seconds to hours
        if(param == 'h' || param == 'H'){
        return minToHours;
    }

    //PARAMETER: seconds to days
    if(param == 'd' || param == 'D'){
        return hoursToDays;
    }

    return -99.99;  //return negative for error checking
}
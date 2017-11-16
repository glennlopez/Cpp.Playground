#include <stdio.h>

//timeline container {hours, minutes, seconds, miliseconds}
int timeLine[4] = {0,0,0,0};
int defaultMilisecond = 183; //CHANGE THIS IF REQUIRED

//prototypes
double convertSec(double, char);

void calc_timeLine(int[], double);
void calc_dateLine();

int main(){

    double seconds = 247142594;
    printf("INPUT: %f\n", seconds);

    calc_timeLine(timeLine, seconds);

    //debug output
    printf("\n");
    printf("Hours: %i\n", timeLine[0]);
    printf("Minutes: %i\n", timeLine[1]);
    printf("Seconds: %i\n", timeLine[2]);
    printf("Miliseconds: %i\n", timeLine[3]);

    return 0;
}



/* 
    TIMELINE CALCULATOR
    Description: Calculates seconds to a Time frame/line
    Dependencies: convertSec()
*/
void calc_timeLine(int container[], double seconds){


    //remainder from days
    double remainder_seconds = (convertSec(seconds, 'd') - (int)(convertSec(seconds, 'd'))) * 60 * 60 * 24;
    printf("Seconds remainder:%f\n", remainder_seconds);
    



    //FIXME: calculate this from raimainder of seconds from converting seconds to days
    timeLine[0] = convertSec(remainder_seconds, 'h');

    //calculate remainding minutes 
    remainder_seconds -= (double)(timeLine[0] * 60 * 60);
    timeLine[1] = convertSec(remainder_seconds, 'm');

    //calculate remainding seconds 
    remainder_seconds -= (double)(timeLine[1] * 60);
    timeLine[2] = remainder_seconds;

    //calculate remainding miliseconds 
    remainder_seconds = defaultMilisecond;
    timeLine[3] = remainder_seconds;






}




/* 
    TIME CONVERTER
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
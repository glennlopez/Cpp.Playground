#include <stdio.h> //<-- used for printf and scanf

//c-lang has no boolean datatypes so i need to enumerate one
typedef int bool;
enum {false, true};

//timeline container {hours, minutes, seconds, miliseconds}
int timeLine[4] = {0,0,0,0};
const char *MONTH[12] = {
    "January",
    "Febuary",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};

//initial parameters
int defaultMilisecond = 183; //<--- CHANGE THIS IF REQUIRED
int startYear, startMonth, startDay, startHour, startMin, startSec, startMiliSec;

//prototypes
double convertSec(double, char);
void calc_timeLine(int[], double);
void calc_dateLine(double);
bool isLeapYear(unsigned int);


int main(){
/*  
    DESIGN CONSTRAINTS:
        - Restricted to using stdio.h library for portability to other langs
        - Keep it simple
        - main() should only have subroutines for code readability
*/
    //Initial parameters
    startYear = 2000;
    double seconds = 247142594; 
    

    printf("INPUT: %f\n", seconds); //debug output

    calc_timeLine(timeLine, seconds);
    calc_dateLine(seconds);

    //FIXME: put this in a subroutine
    //printf("\n");
    //printf("Hours: %i\n", timeLine[0]);
    //printf("Minutes: %i\n", timeLine[1]);
    //printf("Seconds: %i\n", timeLine[2]);
    //printf("Miliseconds: %i\n", timeLine[3]);

    return 0;
}




/* 
    DATELINE CALCULATOR
    Description: Calculates seconds to a Dateline (accounts for leapyear)
    Dependencies: convertSec(), isLeapYear()
*/
void calc_dateLine(double seconds){

    //initial values
    unsigned int year = startYear;
    double totalDays = convertSec(seconds, 'd');


    printf("Initial Days: %f\n", totalDays);

    //Year Counter
    while(totalDays > 365){
        if( isLeapYear(year) ){
            totalDays -= 366;
            year++;
        }
        else{
            totalDays -= 365;
            year++;
        }
    }

    printf("Year: %i\n", year);
    printf("Remainder days: %f\n", totalDays);

}




/* 
    TIMELINE CALCULATOR
    Description: Calculates seconds to a Time frame/line
    Dependencies: convertSec()
*/
void calc_timeLine(int container[], double seconds){

    //store remainder from coverting seconds to days
    double remainder_seconds = (convertSec(seconds, 'd') - (int)(convertSec(seconds, 'd'))) * 60 * 60 * 24;

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
    UNIT CONVERTER
    Description: Converts seconds to ms, Min, Hours, Days
    How to use: concvertSec(time-in-seconds, unit-to-convert-seconds-to)
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
    if(param == 'x' || param == 'X'){
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

    return -999.999;  //return negative for error checking
}



/* 
    LEAP YEAR CALCULATOR
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
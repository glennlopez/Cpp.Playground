#include <stdio.h> //<-- used for printf and scanf

//c-lang has no boolean datatypes so i need to enumerate one
typedef int bool;
enum {false, true};

//global variables
int startYear, startMonth, startDay, startHour, startMin, startSec, startMiliSec, defaultMilisecond, finalYear, finalMonth, finalDay;

int timeLine[4] = {0,0,0,0}; //timeline container {hours, minutes, seconds, miliseconds}

const char *CALENDAR[12] = {
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

//prototypes
double convertSec(double, char);
void calc_timeLine(int[], double);
void calc_dateLine(double);
bool isLeapYear(unsigned int);
void printResults(void);
void printInitVals(void);








int main(){
/*  
    DESIGN CONSTRAINTS:
        - Restricted to using stdio.h library for portability to other langs
        - Keep it simple
        - main() should only have subroutines for code readability
*/
    //PARAMETRIC SETTINGS
    defaultMilisecond = 183; //<-- CHANGE THIS IF REQUIRED
    startYear = 2000;
    startMonth = 1;
    double seconds = 247142594; //<-- CHANGE THIS TO TEST

    //For taking in user input on the terminal
    printInitVals();
    printf("Enter elapse seconds: ");
    scanf("%lf", &seconds);
    printf("\n\n");

    //Debug output - to show in terminal what is bieng converted
    printf("Input: %f seconds\n", seconds);
    

    //SUBROUTINES
    calc_timeLine(timeLine, seconds);
    calc_dateLine(seconds);
    printResults();

    return 0;
}








/* 
    OUTPUT
    Description: Outputs the results after conversion and calculations
    Dependencies: stdio.h
*/
void printResults(void){
    printf("Output: ");
    printf("%s", CALENDAR[finalMonth]);
    printf(" %i", finalDay);
    printf(" %i", finalYear);
    printf(",");
    printf(" %i", timeLine[0]);
    printf(":%i", timeLine[1]);
    printf(":%i", timeLine[2]);
    printf(":%i", timeLine[3]);
    printf("\n");   //new line
}

void printInitVals(void){
    printf("[!] Note: You can set the initial date & time in the main function. By default, this starts at January 1 2000, 00:00:00:00\n\n");
}



/* 
    DATELINE CALCULATOR
    Description: Calculates seconds to a Dateline (accounts for leapyear)
    Dependencies: convertSec(), isLeapYear()
*/
void calc_dateLine(double seconds){

    unsigned int year = startYear;
    unsigned int month = startMonth;

    double totalDays = convertSec(seconds, 'd');

    //YEAR COUNTER
    while(totalDays >= 365){
        if( isLeapYear(year) ){
            totalDays -= 366;
            year++;
        }
        else{
            totalDays -= 365;
            year++;
        }
    }

    //MONTH COUNTER
    while(totalDays > 31){
        
        //31 days
        if( (month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)){
            totalDays -= 31;
            month++;
        }
        //30 days
        else if( (month == 4) || (month == 6) || (month == 9) || (month == 11) ){
            totalDays -= 30;
            month++;
        }
        //febuary
        else if(month == 2){
            if(isLeapYear(year)){
                totalDays -= 29;
                month++;
            }
            else{
                totalDays -= 28;
                month++;
            }
        }

    }

    //FINAL MODIFYERS
    finalDay = totalDays +1;    //+1 becuase there is no 0 day
    finalMonth = month -1;      // -1 is for complying with how arrays work
    finalYear = year; 

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
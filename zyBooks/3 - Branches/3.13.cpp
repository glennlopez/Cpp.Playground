#include <iostream>
using namespace std;

/*
The following program calculates yearly and monthly salary given an hourly wage. The program assumes work-hours-per-week limit of 40 and work-weeks-per-year of 50.

Overtime refers to hours worked per week in excess of some weekly limit, such as 40 hours. Some companies pay time-and-a-half for overtime hours, meaning overtime hours are paid at 1.5 times the hourly wage.

Overtime pay can be calculated with pseudocode as follows (assuming a weekly limit of 40 hours):

		weeklyLimit = 40
		if weeklyHours <= weeklyLimit
		weeklySalary = hourlyWage * weeklyHours
		else
		overtimeHours = weeklyHours - weeklyLimit
		weeklySalary = hourlyWage * weeklyLimit + (overtimeHours * hourlyWage * 1.5)

	1. Run the program and observe the salary earned.
	2. Modify the program to read user input for weeklyHours. Run the program again.

*/

int main() {
   int hourlyWage    = 0;
   int weeklyHours   = 0;
   int weeklySalary  = 0;
   int overtimeHours = 0;
   const int WEEKLY_LIMIT = 40;

   cout << "Enter hourly wage: ";
   cin >> hourlyWage;

   // FIXME: Get user input value for weeklyHours
   weeklyHours = 40;

	//fixed
	cout << "Enter weekly hours (40hrs/week): ";
	cin >> weeklyHours;


   if (weeklyHours <= WEEKLY_LIMIT) {
      weeklySalary = weeklyHours * hourlyWage;
   }
   else {
      overtimeHours = weeklyHours - WEEKLY_LIMIT;
      weeklySalary = static_cast<int>((hourlyWage * WEEKLY_LIMIT) +
                                      (hourlyWage * overtimeHours * 1.5));
   }
   cout << "Weekly salary is: " << weeklySalary << endl;
	cout << "Bi-weekly salary is: " << weeklySalary * 2;

	cout << endl;

   return 0;
}

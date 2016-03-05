#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;
/*
	Write a single statement that prints outsideTemperature with 2 digits in the fraction (after the decimal point). End with a newline. Sample output:
		103.46
*/

int main() {
   double outsideTemperature = 103.45632;

   /* Your solution goes here  */
	cout << setprecision(2) << fixed << outsideTemperature << endl; 

   return 0;
}

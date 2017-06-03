#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;

/*
	Write a single statement that prints outsideTemperature with 4 digits. End with newline. Sample output:
					103.5
*/

int main() {
   double outsideTemperature = 103.45632;

   /* Your solution goes here  */
	cout << setprecision(4) << outsideTemperature << endl;

   return 0;
}

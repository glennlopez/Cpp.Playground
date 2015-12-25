
#include <iostream>
using namespace std;

/*
	Complete the program by writing and calling a function that converts a temperature from Celsius into Fahrenheit.
*/

// FINISH: Define CelsiusToFahrenheit function here
double tempConvert (double temp){
	return (temp * 9)/5 + 32;
}


int main() {
   double tempF = 0.0;
   double tempC = 0.0;

   cout << "Enter temperature in Celsius: " << endl;
   cin >> tempC;
	tempF = tempConvert(tempC);

   // FINISH

   cout << "Fahrenheit: " << tempF;
	cout << endl;
   return 0;
}

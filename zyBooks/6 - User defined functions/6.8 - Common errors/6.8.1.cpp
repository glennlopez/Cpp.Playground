#include <iostream>
using namespace std;

/*
	Using the CelsiusToKelvin function as a guide, create a new function, changing the name to KelvinToCelsius, and modifying the function accordingly.
*/

double CelsiusToKelvin(double valueCelsius) {
   double valueKelvin = 0.0;

   valueKelvin = valueCelsius + 273.15;

   return valueKelvin;
}

/* Your solution goes here  */
double KelvinToCelsius(double valueKelvin){
	//T(°C) = T(K) - 273.15
	double valueCelsius = valueKelvin - 273.15;
	return valueCelsius;
}

int main() {
   double valueC = 0.0;
   double valueK = 0.0;

   valueC = 10.0;
   cout << valueC << " C is " << CelsiusToKelvin(valueC) << " K" << endl;

   valueK = 283.15;
   cout << valueK << "  is " << KelvinToCelsius(valueK) << " C" << endl;

   return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

/*
	Write an expression that will cause the following code to print "Equal" if the value of sensorReading is "close enough" to targetValue. Otherwise, print "Not equal".
*/

int main() {
   double targetValue = 0.3333;
   double sensorReading = 0.0;

   sensorReading = 1.0/3.0;

   if ((sensorReading - targetValue) < 0.0001) {	//<-- solution
      cout << "Equal" << endl;
   }
   else {
      cout << "Not equal" << endl;
   }

   return 0;
}

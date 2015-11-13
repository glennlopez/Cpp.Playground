#include <iostream>
using namespace std;

/*
	Compute the acceleration of gravity for a given distance from the
	earth's center, distCenter, assigning the result to accelGravity.
	The expression for the acceleration of gravity is: (G * M) / (d2),
	where G is the gravitational constant 6.673 x 10-11, M is the
	mass of the earth 5.98 x 1024 (in kg) and d is the distance in
	meters from the earth's center (stored in variable distCenter).
*/

int main() {
   const double G      = 6.673e-11;
   const double M      = 5.98e24;
   double accelGravity = 0.0;
   double distCenter   = 0.0;


   //distCenter = 6.38e6;
	cout << "How far are you from the earth: ";
	cin >> distCenter;

   /* Your solution goes here  */
	accelGravity = (G * M) / (distCenter * distCenter);

   cout << "Gravity is: " << accelGravity << endl;

   return 0;
}

#include <iostream>
using namespace std;

/*
	Given sphereRadius and piVal, compute the volume of a sphere and assign to
	sphereVolume. Use (4.0 / 3.0) to perform floating-point division, instead of
	(4 / 3) which performs integer division.

	Volume of sphere = (4.0 / 3.0) π r^3
*/

int main() {
   const double piVal = 3.14159;
   double sphereVolume = 0.0;
   double sphereRadius = 0.0;

   //sphereRadius = 1.0;
	cout << "Sphere Radius: ";
	cin >> sphereRadius;

   /* Your solution goes here  */
	double sphereCube = sphereRadius * sphereRadius * sphereRadius;
	sphereVolume = (4.0 / 3.0) * piVal * sphereCube;

   cout << "Sphere volume: " << sphereVolume << endl;

   return 0;
}

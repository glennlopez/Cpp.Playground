#include <iostream>
#include <cmath>
using namespace std;

/*
	Simple geometry can compute the height of an object from the object's
	shadow length and shadow angle using the formula:
	tan(angleElevation) = treeHeight / shadowLength.
	Given the shadow length and angle of elevation, compute the tree height.
*/

int main( ) {
   double treeHeight     = 0.0;
   double shadowLength   = 0.0;
   double angleElevation = 0.0;

   angleElevation = 0.11693706; // 0.11693706 radians = 6.7 degrees
   shadowLength   = 17.5;

   /* Your solution goes here  */
	treeHeight = shadowLength * tan(angleElevation);

   cout << "Tree height: " << treeHeight << endl;

   return 0;
}

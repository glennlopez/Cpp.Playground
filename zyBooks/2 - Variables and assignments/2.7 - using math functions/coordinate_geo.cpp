#include <iostream>
#include <cmath>
using namespace std;

/*
	Determine the distance between point (x1, y1) and point (x2, y2),
	and assign the result to pointsDistance. The calculation is:
	Distance = SquareRootOf( (x2 - x1)^2 + (y2 - y1)^2 )
	You may declare additional variables.
	Ex: For points (1.0, 2.0) and (1.0, 5.0), pointsDistance is 3.0.
*/

int main() {
   double x1 = 1.0;
   double y1 = 2.0;
   double x2 = 1.0;
   double y2 = 5.0;
   double pointsDistance = 0.0;

   /* Your solution goes here  */
	double item1 = (x2 - x1);
	double item2 = (y2 - y1);
	double item1Pow = pow(item1, 2);
	double item2Pow = pow(item2, 2);
	pointsDistance = sqrt(item1Pow + item2Pow);

	/* DEBUG
	cout << "x2: " << x2 << endl;
	cout << "x1: " << x1 << endl;
	cout << "y2: " << y2 << endl;
	cout << "y1: " << y1 << endl;
	cout << "Item1: " << item1 << endl;
	cout << "Item2: " << item2 << endl;
	cout << "item1Pow: " << item1Pow << endl;
	cout << "item2Pow: " << item2Pow << endl;
	*/

   cout << "Points distance: " << pointsDistance << endl;

   return 0;
}

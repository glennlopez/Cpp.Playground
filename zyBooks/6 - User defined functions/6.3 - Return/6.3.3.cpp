#include <iostream>
using namespace std;

/*
	Define a function PyramidVolume with double parameters baseLength, baseWidth, and pyramidHeight, that returns as a double the volume of a pyramid with a rectangular base. Relevant geometry equations:

		Volume = base area x height x 1/3
		Base area = base length x base width.
		(Watch out for integer division).
*/

/* Your solution goes here  */
double PyramidVolume(double baseLength, double baseWidth, double pyramidHeight){
	double baseArea = baseLength * baseWidth;
	double vol = ((baseArea * pyramidHeight) * 1/3);
	return vol;
}

int main() {
   cout << "Volume for 1.0, 1.0, 1.0 is: " << PyramidVolume(1.0, 1.0, 1.0) << endl;
   return 0;
}

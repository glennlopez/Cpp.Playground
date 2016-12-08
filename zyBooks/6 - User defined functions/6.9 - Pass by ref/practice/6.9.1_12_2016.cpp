/*
	Define a function CoordTransform() that transforms its first two input parameters xVal and yVal into two output parameters xValNew and yValNew. The function returns void. The transformation is new = (old + 1) * 2. Ex: If xVal = 3 and yVal = 4, then xValNew is 8 and yValNew is 10.
*/

#include <iostream>
using namespace std;

/* Your solution goes here  */


int main() {
   int xValNew = 0;
   int yValNew = 0;

   CoordTransform(3, 4, xValNew, yValNew);
   cout << "(3, 4) becomes " << "(" << xValNew << ", " << yValNew << ")" << endl;

   return 0;
}

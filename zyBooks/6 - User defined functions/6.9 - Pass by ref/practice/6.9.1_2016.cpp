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

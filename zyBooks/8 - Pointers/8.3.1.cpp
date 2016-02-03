#include <iostream>
using namespace std;

/*
	Allocate memory for houseHeight using the new operator.
*/

int main() {
   double* houseHeight = 0;

   /* Your solution goes here  */
	houseHeight = new double;

   *houseHeight = 23;
   cout << "houseHeight is " << *houseHeight;

   return 0;
}

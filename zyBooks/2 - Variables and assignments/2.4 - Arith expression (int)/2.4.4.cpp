#include <iostream>
using namespace std;

/*
	A drink costs 2 dollars. A taco costs 3 dollars. Given the number of each, compute total cost and assign to totalCost. Ex: 4 drinks and 6 tacos yields totalCost of 26.
*/

int main() {
   int numDrinks = 0;
   int numTacos  = 0;
   int totalCost = 0;

   numDrinks = 4;
   numTacos  = 6;

   /* Your solution goes here  */
	totalCost = (2 * numDrinks) + (3 * numTacos);




   cout << "Total cost: " << totalCost << endl;

   return 0;
}

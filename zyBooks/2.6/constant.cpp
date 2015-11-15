#include <iostream>
using namespace std;

/*
	Assign shipCostCents with the cost of shipping a package weighing
	shipWeightPounds. The cost to ship a package is a flat fee of 75
	cents plus 25 cents per pound. Declare and use a const named CENTS_PER_POUND.
*/

int main() {
   int shipWeightPounds = 10;
   int shipCostCents = 0;
   const int FLAT_FEE_CENTS = 75;

   /* Your solution goes here  */
	shipCostCents = shipWeightPounds * FLAT_FEE_CENTS;
	const int CENTS_PER_POUND = FLAT_FEE_CENTS + (25 / shipWeightPounds);

   cout << "Weight(lb): " << shipWeightPounds;
   cout << ", Flat fee(cents): " << FLAT_FEE_CENTS;
   cout << ", Cents per lb: " << CENTS_PER_POUND;
   cout << ", Shipping cost(cents): " << shipCostCents << endl;

   return 0;
}

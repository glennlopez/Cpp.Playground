
#include <iostream>
using namespace std;

/* Computes the total cost of leasing a car given the down payment,
   monthly rate, and number of months
*/

int main() {
   int downpayment     = 0;
   int paymentPerMonth = 0;
   int numMonths       = 0;
   int totalCost       = 0;  // Computed total cost to be output

   cout << "Enter down payment: " << endl;
   cin  >> downpayment;

   cout << "Enter monthly payment: " << endl;
   cin  >> paymentPerMonth;

   cout << "Enter number of months: " << endl;
   cin  >> numMonths;

	//totalCost calculation
   totalCost = downpayment + (paymentPerMonth * numMonths);

   cout << "Total cost: " << totalCost << endl;

   return 0;
}

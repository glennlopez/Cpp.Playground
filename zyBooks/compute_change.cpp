
#include <iostream>
using namespace std;

// FIXME: Add parameters for dimes, nickels, and pennies.
void ComputeChange(int totCents, int& numQuarters, int& numDimes, int& numNickels, int& numPennies) {

   cout << "FIXME: Finish writing ComputeChange" << endl;

   numQuarters = totCents / 25;

   return;
}

int main() {
   int userCents   = 0;
   int numQuarters = 0;
   // FIXME add variables for dimes, nickels, pennies

   cout << "Enter total cents: " << endl;
   cin >> userCents;

   cout << "FIXME: Finish writing main()" << endl;

   ComputeChange(userCents, numQuarters);

   cout << "Quarters: " << numQuarters << endl;

   return 0;
}

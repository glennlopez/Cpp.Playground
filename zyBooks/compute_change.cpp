
#include <iostream>
using namespace std;

// FIXME: Add parameters for dimes, nickels, and pennies.
void ComputeChange(int totCents, int& numQuarters, int& numDimes, int& numNickels, int& numPennies) {

   cout << "FIXME: Finish writing ComputeChange" << endl;

   numQuarters = totCents / 25;
	numDimes = totCents / 10;
	numNickels = totCents / 5;
	numPennies = totCents / 1;

   return;
}

int main() {
   int userCents   = 0;
   int numQuarters = 0;
   // FIXME add variables for dimes, nickels, pennies
	int numDimes = 0;
	int numNickels = 0;
	int numPennies = 0;

   cout << "Enter total cents: " << endl;
   cin >> userCents;

   //cout << "FIXME: Finish writing main()" << endl;

   ComputeChange(userCents, numQuarters, numDimes, numNickels, numPennies);

   cout << "Quarters: " << numQuarters << endl;
   cout << "Dimes: " << numDimes << endl;
   cout << "Nickels: " << numNickels << endl;
   cout << "Pennies: " << numPennies << endl;

   return 0;
}

#include <iostream>
using namespace std;

/*
	Write an expression that prints "Eligible" if userAge is between 18 and 25 inclusive.
	Ex: 17 prints "Ineligible", 18 prints "Eligible".
*/

int main() {
   int userAge = 0;

   userAge = 17;

   if ((userAge >= 18) && (userAge <= 25)) { //<-- answer
      cout << "Eligible" << endl;
   }
   else {
      cout << "Ineligible" << endl;
   }

   return 0;
}

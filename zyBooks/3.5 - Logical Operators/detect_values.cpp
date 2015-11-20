#include <iostream>
using namespace std;

/*
	Write an expression that prints "Special number" if specialNum is -99, 0, or 44.
*/

int main() {
   int specialNum = 0;

   specialNum = 17;

   if (specialNum == -99 || specialNum == 44 || specialNum == 0) { //<-- Your solution goes here
      cout << "Special number" << endl;
   }
   else {
      cout << "Not special number" << endl;
   }

   return 0;
}

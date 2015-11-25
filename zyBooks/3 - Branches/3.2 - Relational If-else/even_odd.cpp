#include <iostream>
using namespace std;

/*
	Write an expression that will print "Even" if the value of userNum is an even number.
*/

int main() {
   int userNum = 0;

   userNum = 4;

   if (userNum % 2 == 0) { //<-- modulo operator to check for remainders
      cout << "Even" << endl;
   }
   else {
      cout << "Odd" << endl;
   }

   return 0;
}

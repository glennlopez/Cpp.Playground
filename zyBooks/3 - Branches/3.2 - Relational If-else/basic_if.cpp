#include <iostream>
using namespace std;

/*
	Write an expression that will cause the following code to print "18 or less" if the value of userAge is 18 or less.
*/

int main() {
   int userAge = 0;

   userAge = 17;
   if (userAge <= 18) {
      cout << "18 or less" << endl;
   }
   else {
     cout << "Over 18" << endl;
   }

   return 0;
}

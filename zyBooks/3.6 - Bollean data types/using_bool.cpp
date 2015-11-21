#include <iostream>
using namespace std;

/*
	Write code to assign true to isTeenager if kidAge is 13 to 19 inclusive.
*/

int main() {
   bool isTeenager = false;
   int kidAge = 0;

   kidAge = 31;

   /* Your solution goes here  */
	if ((kidAge >= 13) && (kidAge <= 19)){
		isTeenager = true;
	}

   if (isTeenager) {
      cout << "Teen" << endl;
   }
   else {
      cout << "Not teen" << endl;
   }

   return 0;
}

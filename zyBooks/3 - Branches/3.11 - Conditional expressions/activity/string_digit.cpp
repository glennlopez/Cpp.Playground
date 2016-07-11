#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
	Set hasDigit to true if the 3-character passCode contains a digit.
*/

int main() {
   bool hasDigit = false;
   string passCode;
   int valid = 0;

   passCode = "xxx";

   /* Your solution goes here  */
	if (hasDigit == 0){
		hasDigit = isdigit(passCode.at(0));
	}
	if (hasDigit == 0){
		hasDigit = isdigit(passCode.at(1));
	}
	if (hasDigit == 0){
		hasDigit = isdigit(passCode.at(2));
	}
	// end of solution...
	
   if (hasDigit) {
      cout << "Has a digit." << endl;
   }
   else {
      cout << "Has no digit." << endl;
   }


   return 0;
}

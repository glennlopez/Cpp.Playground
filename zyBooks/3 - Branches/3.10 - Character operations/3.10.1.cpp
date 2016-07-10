#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Set hasDigit to true if the 3-character passCode contains a digit.

int main() {
   bool hasDigit = false;
   string passCode;
   int valid = 0;

   passCode = "abc";

   /* Your solution goes here  */
	for(unsigned int i = 0; i < passCode.length(); i++){
		hasDigit = hasDigit + isdigit(passCode.at(i));
	}


   if (hasDigit) {
      cout << "Has a digit." << endl;
   }
   else {
      cout << "Has no digit." << endl;
   }

   return 0;
}

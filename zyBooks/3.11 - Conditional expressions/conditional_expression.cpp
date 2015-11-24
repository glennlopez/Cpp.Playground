#include <iostream>
#include <string>
using namespace std;

/*
	Create a conditional expression that evaluates to string "negative" if userVal is less than 0, and "positive" otherwise. Example output when userVal = -9 for the below sample program:
	-9 is negative.
*/

int main() {
   string condStr;
   int userVal = 0;

   userVal = -9;

   condStr = (userVal < 0) ?"negative" : "positive";

   cout << userVal << " is " << condStr << "." << endl;

   return 0;
}

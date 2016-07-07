#include <iostream>
#include <string>
using namespace std;

/*
	Retype and correct the code provided to combine two strings separated by a space. Hint: What type of parameter does push_back expect?
	   secretID.push_back(spaceChar);
	   secretID.push_back(lastName);
*/

int main() {
   string secretID = "Barry";
   string lastName = "Allen";
   char spaceChar = ' ';

   /* Your solution goes here  */
	secretID.push_back(spaceChar);
	secretID = secretID + lastName;

   cout << secretID << endl;
   return 0;
}

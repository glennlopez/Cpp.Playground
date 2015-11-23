#include <iostream>
#include <string>
using namespace std;

/*
	Retype and correct the code provided to combine two strings separated by a space. Hint: What type of parameter does push_back expect?
	   secretID.push_back(spaceChar);
	   secretID.push_back(lastName); <-- error: push_back expects a char not string
*/

int main() {
   string secretID = "Barry";
   string lastName = "Allen";
   char spaceChar = ' ';

   /* Your solution goes here  */
	secretID.push_back(spaceChar);
	secretID.append(lastName);

   cout << secretID << endl;
   return 0;
}

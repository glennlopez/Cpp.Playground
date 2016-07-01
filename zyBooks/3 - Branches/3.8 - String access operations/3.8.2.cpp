#include <iostream>
#include <string>
using namespace std;

/*
	Write an expression to detect that the first character of userInput matches firstLetter. 
*/

int main() {
   string userInput;
   char firstLetter = '-';

   userInput = "banana";
   firstLetter = 'b';

   if (/* Your solution goes here  */) {
      cout << "Found match: " << firstLetter << endl;
   }
   else {
      cout << "No match: " << firstLetter << endl;
   }

   return 0;
}

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*

A core generic top-level domain (core gTLD) name is one of the following Internet domains: .com, .net, .org, and .info (Wikipedia: gTLDs). The following program asks the user to input a name and prints whether that name is a gTLD. The program uses the equality operators ==, which evaluates to true if the two compared strings are identical.

	1) Run the program, noting that the .info input name is not currently recognized as a gTLD.
	2) Extend the if-else statement to detect the .info domain name as a gTLD. Run the program again.
	3) Extend the program to allow the user to enter the name with or without the leading dot, so .com or just com.

*/

int main() {
   string inputName = "";
   string searchName = "";
   string coreGtld1 = ".com";
   string coreGtld2 = ".net";
   string coreGtld3 = ".org";
   // FIXME: Add a fourth core gTLD: .info
   bool isCoreGtld = false;

   cout << endl << "Enter a top-level domain name: " << endl;
   cin >> inputName;

   // Case is irrelevant, so make all comparisons with lower case
   searchName = inputName;

   // FIXME: Allow the user to enter a name with or without a leading period

   // Determine whether the user-entered name is a gTLD
   if (searchName == coreGtld1) {
      isCoreGtld = true;
   }
   else if (searchName == coreGtld2) {
      isCoreGtld = true;
   }
   else if (searchName == coreGtld3) {
      isCoreGtld = true;
   }
   // FIXME: Add a check for the fourth domain name
   else {
      isCoreGtld = false;
   }

   cout << "The name \"" << inputName << "\" ";
   if (isCoreGtld) {
      cout << "is a core gTLD." << endl;
   }
   else {
      cout << "is not a core gTLD." << endl;
   }

   return 0;
}

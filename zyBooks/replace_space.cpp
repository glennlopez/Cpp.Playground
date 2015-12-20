
#include <iostream>
#include <string>
using namespace std;

// Function replaces spaces with hyphens
void StrSpaceToHyphen(string& modStr) {
   int i = 0;  // Loop index

   for (i = 0; i < modStr.length(); ++i) {
      if (modStr.at(i) == ' ') {
         modStr.at(i) = '-';
      }
   }

   return;
}

int main() {
   string userStr;  // Input string from user

   // Prompt user for input
   cout << "Enter string with spaces: " << endl;
   getline(cin, userStr);

   // Call function to modify user defined string
   StrSpaceToHyphen(userStr);

   // Output modified string
   cout << "String with hyphens: ";
   cout << userStr << endl;

   return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

// Function replaces spaces with hyphens
void StrSpaceToHyphen(char modString[]) {
   int i = 0;  // Loop index

   for (i = 0; i < strlen(modString); ++i) {
      if (modString[i] == ' ') {
         modString[i] = '-';
      }
   }

   return;
}

int main() {
   const int INPUT_STR_SIZE = 50;  // Input C string size
   char userStr[INPUT_STR_SIZE];   // Input C string from user

   // Prompt user for input
   cout << "Enter string with spaces: " << endl;
   cin.getline(userStr, INPUT_STR_SIZE);

   // Call function to modify user defined C string
   StrSpaceToHyphen(userStr);

   cout << "String with hyphens: " << userStr << endl;

   return 0;
}

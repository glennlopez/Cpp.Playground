
#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
   const int MAX_USER_INPUT = 100;      // Max input size
   char userInput[MAX_USER_INPUT] = ""; // User defined string
   char* stringPos = 0;                 // Index into string

   // Prompt user for input
   cout << "Enter a line of text: ";
   cin.getline(userInput, MAX_USER_INPUT);

   // Locate exclamation point, replace with period
   stringPos = strchr(userInput, '!');

   if (stringPos != 0) {
      *stringPos = '.';
   }

   // Locate "Boo" replace with "---"
   stringPos = strstr(userInput, "Boo");

   if (stringPos != 0) {
      strncpy(stringPos, "---", 3);
   }

   // Output modified string
   cout << "Censored: " << userInput << endl;

   return 0;
}

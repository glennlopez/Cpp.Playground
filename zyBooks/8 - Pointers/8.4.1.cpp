#include <iostream>
#include <cstring>
using namespace std;

/*
	Assign a pointer to any instance of searchChar in personName to searchResult.
*/

int main() {
   char personName[100] = "Albert Johnson";
   char searchChar = 'J';
   char* searchResult = 0;

   /* Your solution goes here  */
	searchResult = strchr(personName, searchChar);

   if (searchResult != 0) {
      cout << "Character found." << endl;
   }
   else {
      cout << "Character not found." << endl;
   }

   return 0;
}

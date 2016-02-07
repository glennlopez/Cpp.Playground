#include <iostream>
#include <cstring>
using namespace std;

/*
	Assign the first instance of The in movieTitle to movieResult.
*/

int main() {
   char movieTitle[100] = "The Lion King";
   char* movieResult = 0;

   /* Your solution goes here  */
	movieResult = strstr(movieTitle, "The");

   cout << "Movie title contains The? ";
   if (movieResult != 0) {
      cout << "Yes." << endl;
   }
   else {
      cout << "No." << endl;
   }

   return 0;
}

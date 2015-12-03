
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
	Modify the program such that if a user types a country name that isn't found, print a list of known countries.
*/

int main() {
   // Source: www.statista.com, 2010
   const int NUM_CTRY = 5;
   vector<string> ctryNames(NUM_CTRY);// Country names
   vector<int>    ctryMins(NUM_CTRY); // Mins TV watched daily
   string country;
   bool found = false;
   int i = 0;

   ctryNames.at(0) = "China";
   ctryMins.at(0) = 158;

   ctryNames.at(1) = "India";
   ctryMins.at(1) = 119;

   ctryNames.at(2) = "Russia";
   ctryMins.at(2) = 226;

   ctryNames.at(3) = "UK";
   ctryMins.at(3) = 242;

   ctryNames.at(4) = "USA";
   ctryMins.at(4) = 283;

   cout << "Enter country name: ";
   cin >> country;
	cout << endl;

   found = false;
   for (i = 0; i < NUM_CTRY; ++i) { // Find country's index
      if (ctryNames.at(i) == country) {
         found = true;
         cout << "People in " << country << " watch ";
         cout << ctryMins.at(i) << " mins of TV daily";
      }
   }
   if (!found) {
		cout << country << " not found! Try the following: " << endl;

		for (i = 0; i < NUM_CTRY; i++){
			cout << ctryNames.at(i);
			if (i < (NUM_CTRY - 1)){
				cout << ", ";
			}
		}
   }
	cout << ".";
	cout << endl;
   return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
	Programmers commonly use multiple same-sized vectors to store related lists. For example, the following program maintains a list of country names, and another list indicating average minutes of TV watched per day in each corresponding country.
*/


int main() {
   // Source: www.statista.com, 2010
   const int NUM_CTRY = 5;             // Num countries supported
   vector<string> ctryNames(NUM_CTRY); // Country names
   vector<int>    ctryMins(NUM_CTRY);  // Mins TV watched daily
   string userCountry;                 // User defined country
   bool foundCountry = false;          // Match to country supported
   int i = 0;                          // Loop index

   // Define array contents
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

   // Prompt user for country name
   cout << "Enter country name: ";
   cin >> userCountry;

   // Find country's index and avgerage TV time
	for (i = 0; i < NUM_CTRY; i++){

		if (ctryNames.at(i) == userCountry){
			cout << ctryNames.at(i) << " has " << ctryMins.at(i);
			foundCountry = true;
			break;
		}

		else if (!(ctryNames.at(i) == userCountry)){
			foundCountry = false;
		}
	}

	if (foundCountry == false){
		cout << userCountry << " not found.";
	}

	cout << endl;
   return 0;
}

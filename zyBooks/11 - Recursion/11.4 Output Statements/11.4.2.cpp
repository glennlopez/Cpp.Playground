
#include <iostream>
#include <string>
#include <vector>

/*
  Run the recursive program, and observe the output statements for debugging, and that the person is correctly not found.

  Introduce an error by changing itemPos = -1 to itemPos = 0 in the range size == 1 base case.
  
  Run the program, notice how the indented print statements help isolate the error of the person incorrectly being found.
*/

using namespace std;

/* Finds index of string in vector of strings, else -1.
   Searches only with index range low to high
   Note: Upper/lower case characters matter
*/

int FindMatch(vector<string> stringsList, string itemMatch,
              int lowVal, int highVal, string indentAmt) { // indentAmt used for print debug

   int midVal = 0;    // Midpoint of low and high values
   int itemPos = 0;   // Position where item found, -1 if not found
   int rangeSize = 0; // Remaining range of values to search for match

   cout << indentAmt << "Find() range " << lowVal << " " << highVal << endl;

   rangeSize = (highVal - lowVal) + 1;
   midVal = (highVal + lowVal) / 2;

   if (itemMatch == stringsList.at(midVal)) {   // Base case 1: item found at midVal position
      cout << indentAmt << "Found person." << endl;
      itemPos = midVal;
   }
   else if (rangeSize == 1) {                   // Base case 2: match not found
      cout << indentAmt << "Person not found." << endl;
      itemPos = -1;
   }
   else {                                       // Recursive case: Search lower or upper half
      if (itemMatch < stringsList.at(midVal)) { // Search lower half, recursive call
         cout << indentAmt << "Searching lower half." << endl;
         itemPos = FindMatch(stringsList, itemMatch, lowVal, midVal, indentAmt + "   ");
      }
      else {                                    // Search upper half, recursive call
         cout << indentAmt << "Searching upper half." << endl;
         itemPos = FindMatch(stringsList, itemMatch, midVal + 1, highVal, indentAmt + "   ");
      }
   }

   cout << indentAmt << "Returning pos = " << itemPos << "." << endl;
   return itemPos;
}

int main() {
   vector<string> attendeesList(0); // List of attendees
   string attendeeName;             // Name of attendee to match
   int matchPos = 0;                // Matched position in attendee list

   // Omitting part of program that adds attendees
   // Instead, we insert some sample attendees in sorted order
   attendeesList.push_back("Adams, Mary");
   attendeesList.push_back("Carver, Michael");
   attendeesList.push_back("Domer, Hugo");
   attendeesList.push_back("Fredericks, Carlos");
   attendeesList.push_back("Li, Jie");

   // Find "Aaron, Joe"
   attendeeName = "Aaron, Joe";

   // Call function to match name, output results
   matchPos = FindMatch(attendeesList, attendeeName, 0,
                        attendeesList.size() - 1, "   ");
   if (matchPos >= 0) {
      cout << "Found at position " << matchPos << "." << endl;
   }
   else {
      cout << "Not found. " << endl;
   }

   return 0;
}

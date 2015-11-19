#include <iostream>
using namespace std;

int main() {
   double milesTravel = 0.0; // User input of miles to travel
   double hoursFly    = 0.0; // Travel hours if flying those miles
   double hoursDrive  = 0.0; // Travel hours if driving those miles

   cout << "Enter number of miles to travel: " << endl;
   cin  >> milesTravel;

   hoursFly   = milesTravel / 500.0; // Plane flys 500 mph
   hoursDrive = milesTravel / 60.0;  // Car drives 60 mph

   cout << milesTravel << " miles would take:" << endl;
   cout << hoursFly    << " hours to fly,"     << endl;
   cout << hoursDrive  << " hours to drive."   << endl;

   return 0;
}

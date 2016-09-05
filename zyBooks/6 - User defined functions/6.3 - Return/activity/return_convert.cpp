
#include <iostream>
using namespace std;

/* Converts a height in feet/inches to centimeters */
double HeightFtInToCm(int heightFt, int heightIn) {
   const double CM_PER_IN = 2.54;
   const int    IN_PER_FT = 12;
   int totIn = 0;
   double cmVal = 0.0;

   totIn = (heightFt * IN_PER_FT) + heightIn; // Total inches
   cmVal = totIn * CM_PER_IN;                 // Conv inch to cm
   return cmVal;
}

int main() {
   int userFt = 0;  // User defined feet
   int userIn = 0;  // User defined inches

   // Prompt user for feet/inches
   cout << "Enter feet: ";
   cin >> userFt;

   cout << "Enter inches: ";
   cin >> userIn;

   // Output converted feet/inches to cm result
   cout << "Centimeters: ";
   cout << HeightFtInToCm(userFt, userIn) << endl;

   return 0;
}

/*
	The following provides an example (not useful other than for learning) of assigning the address of variable vehicleMpg to the pointer variable valPtr.

	Run and observe that the two output statements produce the same output.
	Modify the value assigned to *valPtr and run again.
	Now uncomment the statement that assigns vehicleMpg. PREDICT whether both output statements will print the same output. Then run and observe the output; did you predict correctly?
*/
#include <iostream>
using namespace std;

int main() {
   double vehicleMpg = 0.0;
   double* valPtr = 0;

   valPtr = &vehicleMpg;

   *valPtr = 29.6; // Assigns the number to the variable
                   // POINTED TO by valPtr.

  // vehicleMpg = 40;   // Uncomment this later

   cout << "Vehicle MPG = " << vehicleMpg << endl;
   cout << "Vehicle MPG = " << *valPtr << endl;
   return 0;
}

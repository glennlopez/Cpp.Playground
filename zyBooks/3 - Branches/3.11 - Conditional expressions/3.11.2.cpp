#include <iostream>
using namespace std;

/*
	Using a conditional expression, write a statement that increments numUsers if updateDirection is 1, otherwise decrements numUsers. Ex: if numUsers is 8 and updateDirection is 1, numUsers becomes 9; if updateDirection is 0, numUsers becomes 7. Hint: Start with "numUsers = ...". 
*/

int main() {
   int numUsers = 0;
   int updateDirection = 0;

   numUsers = 8;
   updateDirection = 1;

   /* Your solution goes here  */

   cout << "New value is: " << numUsers << endl;

   return 0;
}

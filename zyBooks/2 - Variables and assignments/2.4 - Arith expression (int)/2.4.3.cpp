#include <iostream>
using namespace std;

/*
	A cashier distributes change using the maximum number of five dollar bills, followed by one dollar bills. For example, 19 yields 3 fives and 4 ones. Write a single statement that assigns the number of 1 dollar bills to variable numOnes, given amountToChange. Hint: Use the % operator.
*/

int main() {
   int amountToChange = 0;
   int numFives = 0;
   int numOnes  = 0;

   amountToChange = 19;
   numFives = amountToChange / 5;

   /* Your solution goes here  */

   cout << "numFives: " << numFives << endl;
   cout << "numOnes: " << numOnes << endl;

   return 0;
}

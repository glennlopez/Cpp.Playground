#include <iostream>
using namespace std;

/*
	Write a statement that computes num1 plus num2, divides by 3, and assigns the result to finalResult. Ex: If num1 is 4 and num2 is 5, final result is 3.
*/

int main() {
   int num1 = 0;
   int num2 = 0;
   int finalResult = 0;

   num1 = 4;
   num2 = 5;

   /* Your solution goes here  */
	finalResult = (num1 + num2)/3;

   cout << "Final result: " << finalResult << endl;

   return 0;
}

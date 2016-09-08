#include <iostream>
using namespace std;

/*
	Write a function PrintShampooInstructions(), with int parameter numCycles, and void return type. If numCycles is less than 1, print "Too few.". If more than 4, print "Too many.". Else, print "N: Lather and rinse." numCycles times, where N is the cycle number, followed by "Done.". End with a newline. Example output for numCycles = 2:
	1: Lather and rinse.
	2: Lather and rinse.
	Done.

	Hint: Define and use a loop variable.
*/

/* Your solution goes here  */
void PrintShampooInstructions(int numCycles){
	if(numCycles < 1){
		cout << "Too few." << endl;
	}

	else if(numCycles > 4){
		cout << "Too many." << endl;
	}

	else{
		for(unsigned int i = 1; i <= numCycles; i++){
			cout << i << ": Lather and rinse." << endl;
		}
		cout << "Done." << endl;
	}
}


int main() {
   PrintShampooInstructions(2);

   return 0;
}

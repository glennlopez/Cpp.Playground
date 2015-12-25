#include <iostream>
using namespace std;

/*
	Write a function PrintShampooInstructions(), with int parameter numCycles, and void return type. If numCycles is less than 1, print "Too few.". If more than 4, print "Too many.". Else, print "N: Lather and rinse." numCycles times, where N is the cycle number, followed by "Done.". End with a newline. Example output for numCycles = 2:
	1: Lather and rinse.
	2: Lather and rinse.
	Done.
*/

/* Your solution goes here  */
void PrintShampooInstructions(int numCycles){
	//if numCycles is less than 1 print "Too few"
	//followed by "Done."
	if (numCycles < 1){
		cout << "Too few.";
		cout << endl;
	}

	//if numCycles is more than 4 print "Too many"
	//followed by "Done."
	else if (numCycles > 4){
		cout << "Too many.";
		cout << endl;
	}

	//else print "N: Lather and rinse." numCycles
	/* N is the cycle numver*/
	//followed by "Done."
	else{
		for (int i = 0; i < numCycles; i++){
			cout << i + 1 << ": Lather and rinse.";
			cout << endl;
		}
		cout << "Done.";
		cout << endl;
	}

}


int main() {
   PrintShampooInstructions(2);

   return 0;
}

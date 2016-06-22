#include <iostream>
using namespace std;

/*

	Write multiple if statements. If carYear is 1969 or earlier, print "Probably has few safety features." If 1970 or higher, print "Probably has seat belts." If 1990 or higher, print "Probably has anti-lock brakes." If 2000 or higher, print "Probably has air bags." End each phrase with period and newline. Ex: carYear = 1995 prints:

		Probably has seat belts.
		Probably has anti-lock brakes.

*/

int main() {
   int carYear = 0;

   carYear = 1940;

   /* Your solution goes here  */
	if(carYear <= 1969){
		cout << "Probably has few safety features.";
		cout << endl;
	}

	if(carYear >= 1970){
		cout << "Probably has seat belts.";
		cout << endl;
	}

	if(carYear >= 1990){
		cout << "Probably has anti-lock brakes.";
		cout << endl;
	}

	if(carYear >= 2000){
		cout << "Probably has air bags.";
		cout << endl;
	}

   return 0;
}

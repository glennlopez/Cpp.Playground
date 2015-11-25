#include <iostream>
using namespace std;

/*
	Write an if-else statement that checks patronAge. If 55 or greater, print "Senior citizen", otherwise print "Not senior citizen" (without quotes). End with newline.
*/

int main() {
   int patronAge = 0;

   patronAge = 55;

	cout << "Enter age: ";
	cin >> patronAge;

   /* Your solution goes here  */
	if (patronAge >= 55){
		cout << "Senior citizen\n";
	}
	else{
		cout << "Not a senior citizen\n";
	}

   return 0;
}

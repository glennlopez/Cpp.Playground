// https://www.youtube.com/watch?v=FuK3Erbqofc

#include <iostream>
using namespace std;

/* SYNOPSYS
		Pointers store the address of a variable - initiated like so:
			int *identifier;
			int *p1;
			int *p1, *p2, *p3;

			(*) --> is a derefreance operator
			*p1 --> returns the value of the variable the pointer is pointing to
			 p1 --> returns the address of where variable is stored
			&p1 --> returns address of pointer

*/

int main(){

	int 	num1 = 8,
		// *p1 = num1 <-- not valid. pointing to num1 requires & sign
			*p1 = &num1; //<-- p1 points to num1 address (returns 8)


	cout << "Value: " << *p1 << endl;
	cout << "Address: " << &num1 << endl;
	cout << "No Astrisks on p1: " << p1 << endl;
	cout << "& sign on p1: " << &p1 << endl; //<-- address of the pointer itself

	cout << endl;
	return 0;
}

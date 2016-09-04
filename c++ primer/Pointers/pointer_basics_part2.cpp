#include <iostream>
using namespace std;

int main(){

	//Initialize variables
	int num1;
	int num2;
	int *p1;			//<-- tells the compiler that p1 is a pointer (store address ONLY)

	num1 = 31;		//<-- sets num1 to store 31
	num2 = 29;		//<-- sets num2 to store 29
	p1 = &num1;		//<-- sets p1 pointer to point to num1's value

	//p1 = 10; 		//<-- ERROR: "10" is a number, not an address to anything

	cout << p1 << endl;		//<-- outputs the ADDRESS p1 is pointing to
	cout << *p1 << endl; 	//<-- outputs the VALUE p1 is pointing to
	cout << &p1 << endl;		//<-- outputs the ADDRESS of p1 itself
	cout << &num1 << endl;	//<-- outputs the ADDRESS of variable num1

	cout << endl;
	return 0;
}

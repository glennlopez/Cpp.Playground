// https://www.youtube.com/watch?v=FuK3Erbqofc

#include <iostream>
using namespace std;


int main(){

	int num1 = 15;
	int num2 = 45;

	int *p1 = &num1;	//<-- Pointer 1: 15
	int *p2 = &num2;	//<-- Pointer 2: 45

	cout << endl;
	cout << "------------------------" << endl;
	cout << "ORIGINAL" << endl;
	cout << "Pointer 1: " << *p1 << endl;
	cout << "Pointer 2: " << *p2 << endl;
	cout << "Num1: " << num1 << endl;
	cout << "Num2: " << num2 << endl;
	cout << "------------------------" << endl;

	p1 = p2;			//<-- p1 outputs the value of p2 (keeps num1 value in mem)

	cout << endl;
	cout << "------------------------" << endl;
	cout << "When p1 = p2" << endl;
	cout << "Pointer 1: " << *p1 << endl;
	cout << "Pointer 2: " << *p2 << endl;
	cout << "Num1: " << num1 << endl;
	cout << "Num2: " << num2 << endl;
	cout << "------------------------" << endl;

/*
	*p1 = *p2;		//<-- Sets the value of *p1 to value of *p2

	cout << endl;
	cout << "------------------------" << endl;
	cout << "When *p1 = *p2" << endl;
	cout << "Pointer 1: " << *p1 << endl;
	cout << "Pointer 2: " << *p2 << endl;
	cout << "Num1: " << num1 << endl;
	cout << "Num2: " << num2 << endl;
	cout << "------------------------" << endl;
*/
	cout << endl;
	return 0;
}

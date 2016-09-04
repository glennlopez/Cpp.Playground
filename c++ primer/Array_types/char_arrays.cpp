#include <iostream>
using namespace std;

int main(){

	char A1[] = "abcdefghij"; // null terminator automaticall included
	char A2[] = {'m', 'n', 'o', 'p', '\0'}; //null terminator explicitly included
	char A3[] = {'x', 'y', 'z'}; //null trminator NOT included

	cout << endl;

	cout << "cout << A1: " << A1 << endl;
	cout << "sizeof(A1[1]): " << sizeof(A1[1]) << endl;
	cout << "sizeof(A1): " << sizeof(A1) << endl;

	cout << endl;

	cout << "cout << A2: " << A2 << endl;
	cout << "sizeof(A2[1]): " << sizeof(A2[1]) << endl;
	cout << "sizeof(A2): " << sizeof(A2) << endl;

	cout << endl;

	cout << "cout << A3: " << A3 << endl;
	cout << "sizeof(A3[1]): " << sizeof(A3[1]) << endl;
	cout << "sizeof(A3): " << sizeof(A3) << endl;

	cout << endl;
	return 0;
}

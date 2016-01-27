#include <iostream>
using namespace std;


int main(){
	cout << endl;

	int num1;
	int* const p1 = &num1;

	num1 = 20;

	cout << *p1 << endl;

	cout << endl;
	return 0;
}

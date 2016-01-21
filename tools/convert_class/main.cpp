#include <iostream>
#include "ConvertTemp_class.cpp"
#include "ConvertBase_class.cpp"
using namespace std;

//How to use Example:
int main(){

	ConvertTemp temp1, temp2, temp3;

	//cout << temp1.celcius(750, 'k') << endl;
	//cout << temp2.fahrenheit(-30, 'c') << endl;
	//cout << temp3.kelvin(230, 'f') << endl;

	//celcius(103, 'f');
	//kelvin(33, 'c');
	fahrenheit(-28, 'c');

	//++++++++++++++++++++++++++++++++++++++++++++

	ConvertBase item1;

	cout << item1.base(10, 2, 12) << " ";

	cout << endl;
	return 0;
}

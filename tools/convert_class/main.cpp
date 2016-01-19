#include <iostream>
#include "convert_class.cpp"
using namespace std;

//How to use Example:
int main(){

	Convert temp1, temp2, temp3;

	//cout << temp1.celcius(750, 'k') << endl;
	//cout << temp2.fahrenheit(-30, 'c') << endl;
	//cout << temp3.kelvin(230, 'f') << endl;

	celcius(200, 'k');
	//kelvin(33, 'c');
	//fahrenheit(38, 'c');

	cout << endl;
	return 0;
}

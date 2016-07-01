#include <iostream>
#include <string>

//testing length() string access

using namespace std;

int main(){

	string myString_1 = "string cheese";
	string myString_2 = "protractor";

	int strLen1 = myString_1.length();
	int strLen2 = myString_2.length();
	int strFind = myString_1.find('e');

	cout << "STRLen1: " << strLen1 << endl;
	cout << "STRLen2: " << strLen2 << endl;
	cout << "STRFind: " << strFind << endl;

	cout << endl;
	return 0;
}

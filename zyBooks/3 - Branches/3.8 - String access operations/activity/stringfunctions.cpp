#include <iostream>
#include <string>

//testing length() string access

using namespace std;

int main(){

	string myString_1 = "string cheese";
	string myString_2 = "protractor";
	string emptyString = "";

	int strLen1 = myString_1.length();
	int strLen2 = myString_2.length();
	int strFind = myString_1.find('e');
	bool isEmpty = emptyString.empty();


	cout << "STRLen1: " << strLen1 << endl;
	cout << "STRLen2: " << strLen2 << endl;
	cout << "STRFind: " << strFind << endl;
	cout << "STREmpty: " << isEmpty << endl;

	cout << "StringSub: " << myString_2.substr(myString_2.length() - 7, 7);

	cout << endl;
	return 0;
}

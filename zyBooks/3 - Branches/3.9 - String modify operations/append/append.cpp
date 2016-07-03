#include <iostream>
#include <string>
using namespace std;

string myString = "this is: ";

int main(){

	cout << myString;

	myString.append("Sparta!");

	cout << myString << endl;

	cout << endl;
	return 0;
}

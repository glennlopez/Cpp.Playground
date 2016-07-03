#include <iostream>
#include <string>
using namespace std;

//https://zybooks.zyante.com/#/zybook/ProgrammingInCppR11/chapter/3/section/9



int main(){

	string myString = "my name is smith";
	int strlegth = myString.length();

	cout << endl;
	cout << "myString: (" << myString << ") has " << strlegth << " chars." << endl;
	myString.clear();

	cout << endl;
	cout << "After myString.clear()..." << endl;
	cout << "myString: (" << myString << ") has " << strlegth << " chars." << endl;

	cout << endl;
	return 0;
}

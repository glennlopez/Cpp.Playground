#include <iostream>
#include <string>
using namespace std;

//https://zybooks.zyante.com/#/zybook/ProgrammingInCppR11/chapter/3/section/9

/*
	Deletes characters, sets size to 0.
*/


int main(){

	string myString = "my name is smith";

	cout << endl;
	cout << "myString: (" << myString << ") has " << myString.length() << " chars." << endl;
	myString.clear();

	cout << endl;
	cout << "After myString.clear()..." << endl;
	cout << "myString: (" << myString << ") has " << myString.length() << " chars." << endl;

	myString = "this is his face go smush lol";
	cout << endl;

	cout << "myString (" << myString << ") not has " << myString.length() << endl;
	myString.clear();
	cout << endl;

	cout << "myString after .clear() has " << myString.length() << endl;



	cout << endl;
	return 0;
}

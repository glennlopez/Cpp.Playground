#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
	This is a referance incase I forget how to manipulate vectors.
	Shown in this referance are the following vector types:
		- int
		- char
		- string
		- class
*/

class Example{
	public:
		void SetUname(string param);
		string GetUname(){
			return username;
		}
	private:
		string username;
};

void Example::SetUname(string param){
	username = param;
}


//** EXAMPLES **//
void vecExInt(){
	vector<int> usrInt(5);

	usrInt.at(0) = 111;
	usrInt.at(1) = 131;
	usrInt.at(2) = 21;
	usrInt.at(3) = 144;
	usrInt.at(4) = 152;

	cout << usrInt.at(3);
	cout << endl;
}

void vecExChar(){
	vector<char> usrChar(5);

	usrChar.at(0) = 'a';
	usrChar.at(1) = 'b';
	usrChar.at(2) = 'c';
	usrChar.at(3) = 'd';
	usrChar.at(4) = 'e';

	cout << usrChar.at(4);
	cout << endl;
}

void vecExString(){
	vector<string> usrString(5);

	usrString.at(0) = "test";
	usrString.at(1) = "hello";
	usrString.at(2) = "world";
	usrString.at(3) = "wexample";
	usrString.at(4) = "blah";

	cout << usrString.at(2);
	cout << endl;
}

void vecExClass(){
	vector<Example> usrClass(5);

	usrClass.at(0).SetUname("test");
	usrClass.at(1).SetUname("hello there!");
	usrClass.at(2).SetUname("this is a test");
	usrClass.at(3).SetUname("1 2 3 qzx");
	usrClass.at(4).SetUname("!@#$%^&*");

	cout << usrClass.at(1).GetUname();
	cout << endl;
}

//** MAIN FUNCTION **//
int main(int argc, char const *argv[]) {

	//vecExInt();
	//vecExChar();
	//vecExString();
	vecExClass();

	return 0;
}

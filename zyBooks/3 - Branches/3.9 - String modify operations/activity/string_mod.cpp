#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
	//variables
	string uname = "?";

	//uname.push_back('?');
	//uname.append("t");
	//uname.insert(0, "test");
	//uname.clear();
	//uname.replace(0, 1, "Hello");
	//uname.resize(3);
	uname = uname + "Hello";

	int unum = uname.length();

	cout << uname; cout << endl;
	cout << unum;
	cout << endl;

	return 0;
}

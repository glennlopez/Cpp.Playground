#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
	/* code */
	string usr = "Glenn";
	string mod;

	mod = toupper(usr.at(1));

	cout << usr << endl;
	cout << mod << endl;

	return 0;
}

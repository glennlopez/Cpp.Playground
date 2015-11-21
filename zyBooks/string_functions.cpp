#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[]) {
	/* code */
	//string name1 = "glenn lopez";
	string name1 = "glenn lopez";
	string name2 = "glennlopez";

	int spaceLocation = 0;
	spaceLocation = name1.find(' ') + 1;
	int index = spaceLocation;
	int length = (name1.length() - spaceLocation);

	cout << spaceLocation << endl;
	cout << length;

	cout << endl;
	cout << "3rth Char in 'glenn lopez': " << name1.at(2) << endl;
	cout << "Find string 'e' in glenn lopez: " << name1.find('e') << endl;
	cout << "Find string 'e' in glennlopez: " << name2.find('e') << endl;
	cout << "Find string 2nd 'e' in glenn lopez: " << name1.find('e', 5) << endl;
	cout << "Find string 2nd 'e' in glennlopez: " << name2.find('e', 5) << endl;
	cout << "Is name1 string empty: " << name1.empty() << endl;
	cout << "Length of 'glenn lopez': " << name1.length() << endl;
	cout << "Length of 'glennlopez': " << name2.length() << endl;
	cout << "Return string first name1: " << name1.substr(0, 5) << endl;
	cout << "Return string last name1: " << name1.substr(6, 5) << endl;
	cout << "Return last word in name1: " << name1.substr(index, length) << endl;
	cout << name1.substr(name1.find(' ') + 1, (name1.length() - name1.find(' ') + 1)) << endl;

	return 0;
}

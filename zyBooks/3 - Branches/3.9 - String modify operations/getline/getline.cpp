#include <iostream>
#include <string>
using namespace std;

//https://www.youtube.com/watch?v=uB7g9hc8WZ4
//getline(input stream, string var, deliminator char);

int main(){
	string myString = "undefined";

	cout << "What is your name: ";
	getline(cin, myString);

	cout << "Name: " << myString << endl;

	cout << endl;
	return 0;
}

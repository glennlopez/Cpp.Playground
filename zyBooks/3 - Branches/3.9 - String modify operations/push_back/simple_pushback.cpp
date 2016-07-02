#include <iostream>
#include <string>

using namespace std;

string myString = "?";
string countString = "";
int i = 0;

int main(){

	myString.push_back('!');

	for(i = 0; i < 10; i++){
		//countString.push_back(1); //<-- not gonna work, need to use vectors
		//countString.push_back(' ');
	}
	cout << i << endl;
	cout << myString << endl;
	cout << countString << endl;

	cout << endl;
	return 0;
}

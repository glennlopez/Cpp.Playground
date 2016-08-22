#include <iostream>
using namespace std;

int main(){

	char userName[] = "Glenn";

	cout << "userName: " << userName << endl;
	cout << "size of userName: " << sizeof(userName) << endl;
	cout << "0 char: " << userName[0] << endl;
	cout << "1 char: " << userName[1] << endl;
	cout << "2 char: " << userName[2] << endl;
	cout << "3 char: " << userName[3] << endl;
	cout << "4 char: " << userName[4] << endl;
	cout << "5 char: " << userName[5] << endl;

	cout << endl;
	return 0;
}

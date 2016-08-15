#include <iostream>
using namespace std;

int main(){
	const int SIZE = 10;

	char uName1[] = "Glenn";
	char uName2[SIZE];

	uName2[0] = 'L';
	uName2[1] = 'o';
	uName2[2] = 'p';
	uName2[3] = 'e';
	uName2[4] = 'z';


	cout << "First name: " << uName1 << endl;
	cout << "Last name: " << uName2 << endl;
	cout << "uName2[3]: " << uName2[3] << endl;
	cout << "uName2[1]: " << uName2[1] << endl;
	cout << "uName2[9]: " << uName2[9] << endl;
	cout << "uName2[6]: " << uName2[6] << endl;
	cout << "Size of uName2: " << sizeof(uName2) << endl;
	cout << "Size of uName1: " << sizeof(uName1) << endl;

	cout << endl;
	return 0;
}

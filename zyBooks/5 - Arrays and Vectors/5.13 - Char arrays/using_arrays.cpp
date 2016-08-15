#include <iostream>
using namespace std;

int main(){
	const int SIZE = 10;

	char uName1[] = "Glenn";
	char uName2[SIZE];

	int num1[] = {0,1,2,3,4,5,6,7,8,9};
	char num2[] = "0123456789";

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
	cout << "num1: " << num1 << endl;
	cout << "num1 size: " << sizeof(num1) << endl;
	cout << "num1[1]: " << num1[1] << endl;
	cout << endl;
	cout << "num2: " << num2 << endl;
	cout << "num2 size: " << sizeof(num2) << endl;
	cout << "num2[1]: " << num2[1] << endl;
	cout << endl;
	cout << "num2[1] + num2[2]: " << (num2[1] - '0') + (num2[2] - '0') << endl;
	cout << "num1[1] + num1[2]: " << num1[1] + num1[2] << endl;


	cout << endl;
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
//https://zybooks.zyante.com/#/zybook/ProgrammingInCppR11/chapter/9/section/3

int main(){
	float num1 = 112.12234;
	float num2 = 21;

	cout << setprecision(2) << num1 << endl;
	cout << setprecision(3) << num1 << endl;
	cout << setprecision(4) << num1 << endl;
	cout << setprecision(5) << num1 << endl;
	cout << fixed << num1 << endl;
	cout << scientific << num1 << endl;
	cout << scientific << setprecision(2) << num1 << endl;

	cout << fixed << showpoint << num2 << endl;



	cout << endl;
	return 0;
}

#include <iostream>
#include <iomanip>	//<-- REQUIRED!
#include <ios>			//<-- REQUIRED!
using namespace std;
//https://zybooks.zyante.com/#/zybook/ProgrammingInCppR11/chapter/9/section/3

int main(){
	float num1 = 112.12234;
	float num2 = 21;

	//Precition from <iomanip>
	cout << setprecision(2) << num1 << endl;
	cout << setprecision(3) << num1 << endl;
	cout << setprecision(4) << num1 << endl;
	cout << setprecision(5) << num1 << endl;
	cout << fixed << num1 << endl;
	cout << scientific << num1 << endl;
	cout << scientific << setprecision(2) << num1 << endl;
	cout << fixed << showpoint << num2 << endl;
	cout << setprecision(2) << fixed << num1 << endl; 

	//Spacing from <iomanip>
	cout << setw(10) << num1 << endl;
	cout << setw(10) << setfill('-') << num1 << endl;

	//Alighnment from <ios>
	cout << setw(10) << left << num1 << endl;
	cout << setw(10) << right << num1 << endl;

	//Using flush
	cout << "testing 123 " << num1 << flush;
	cout << "blah end" << num1 << endl;





	cout << endl;
	return 0;
}

#include <iostream>
#include "class_CalcArea.cpp"
using namespace std;

double laptopW = 0;
double laptopH = 0;

int main(int argc, char const *argv[]) {
	cout << "Set laptop width: ";
	cin >> laptopW;

	cout << "Set laptop height: ";
	cin >> laptopH;

	CalcArea laptop;
	laptop.SetWidth(laptopW);
	laptop.SetHeight(laptopH);

	cout << "Laptop area is: " << laptop.GetArea();

	cout << endl;
	return 0;
}

#include <iostream>
#include "class_CalcArea.cpp"
#include "class_CalcVol.cpp"
using namespace std;

void AskLaptopArea(){
	double laptopW = 0;
	double laptopH = 0;

	cout << "Set laptop width: ";
	cin >> laptopW;

	cout << "Set laptop height: ";
	cin >> laptopH;

	CalcArea laptop;
	laptop.SetWidth(laptopW);
	laptop.SetHeight(laptopH);

	cout << "Laptop area is: " << laptop.GetArea();
}



int main(int argc, char const *argv[]) {
	AskLaptopArea();

	cout << endl;
	return 0;
}

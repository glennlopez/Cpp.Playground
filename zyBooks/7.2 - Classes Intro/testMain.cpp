#include <iostream>
#include "class_CalcArea.cpp"
#include "class_CalcVol.cpp"
using namespace std;

void AskArea(){
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

void AskVol(){
	CalcVol cube;

	double paramW, paramH, paramL;

	cout << "Set Width: ";
	cin >> paramW;
	cout << "Set Height: ";
	cin >> paramH;
	cout << "Set length: ";
	cin >> paramL;

	cube.SetWidth(paramW);
	cube.SetHeight(paramH);
	cube.SetLength(paramL);

	cout << "Volume is: " << cube.GetVol();

}


//** MAIN **//
int main(int argc, char const *argv[]) {
	//AskArea();
	AskVol();

	cout << endl;
	return 0;
}

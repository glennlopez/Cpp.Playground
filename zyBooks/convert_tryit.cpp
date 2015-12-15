#include <iostream>
using namespace std;

//prototypes
double FeetToCm();
void promptConvert();

/*
	This program converts feet and inches to cm.
		Conversion factors:
			- 1 feet = 30.48 cm
			- 1 inch = 2.54 cm
*/

int main(int argc, char const *argv[]) {
	promptConvert();
return 0;
}


/*			FUNCTIONS 		*/

//conversion algo
double FeetToCm (int usrFeet, int usrInch){
	//conversion factors
	double feetCm = 30.8;
	double inchCm = 2.54;

	//convert
	double feettocm = usrFeet * feetCm;
	double inchtocm = usrInch * inchCm;

	double finalCm = feettocm + inchtocm;
	//output
	cout << finalCm << " cm" << endl;

	return 0;
}

void promptConvert (void){
	double uFeet;
	double uInch;

	cout << "Feet: ";
	cin >> uFeet;

	cout << "Inches: ";
	cin >> uInch;

	FeetToCm(uFeet, uInch);
}

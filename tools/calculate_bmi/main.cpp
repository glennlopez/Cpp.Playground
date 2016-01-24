#include <iostream>
#include <vector>
#include <string>

#include "bmi.h"
#include "bmi.cpp"
using namespace std;

/*	SYNOPSYS: BMI Calculator <BMI> | bmi.cpp bmi.h

		Prompt how many patients need to have bmi calculated {

			Ask for patient names
			Ask for patient height
			Ask for patient weight

			create a new object using bmi class
			pass (name, height, weight) to new object

			push the new object to a vector

		} loop (x) times

		Calculate Patient BMI

		Functions:
			generate(vectorName);	//<-- Populate a vector
			Print(vectorName);		//<-- Shows Elements + BMI

*/

int main(){
	vector<BMI> Patients; //<-- place objects in this vector

	generate(Patients);
	Print(Patients);

	cout << endl;
	return 0;
}

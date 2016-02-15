//https://www.youtube.com/watch?v=vz1O9nRyZaY

#include <iostream>
#include <string>
#include "BMI.h" 			//<-- this is included in all .cpp file
#include "BMI.cpp"
using namespace std;

void AskInfo(string& name, int& height, double& weight);


int main(){

	string name;
	int height;
	double weight;

	AskInfo(name, height, weight);
	BMI Student_1(name, height, weight);

	//access info
	cout << endl << "Patient Name: " << Student_1.getName() << endl
	<< "Height: " << Student_1.getHeight() << endl
	<< "Weight: " << Student_1.getWeight() << endl
	<< "BMI: " << Student_1.calcBMI() << endl;


	AskInfo(name, height, weight);
	BMI Student_2;

	Student_2.setName(name);
	Student_2.setHeight(height);
	Student_2.setWeight(weight);

	//access info
	cout << endl << "Patient Name: " << Student_2.getName() << endl
	<< "Height: " << Student_2.getHeight() << endl
	<< "Weight: " << Student_2.getWeight() << endl
	<< "BMI: " << Student_2.calcBMI() << endl;


	cout << endl;
	return 0;
}


//** FUNCTIONS **//
void AskInfo(string& name, int& height, double& weight){
	cout << endl;
	cout << "Enter name: ";
	cin >> name;

	cout << "Enter height: ";
	cin >> height;

	cout << "Enter weight: ";
	cin >> weight;
}

#include <iostream>
#include <string>
#include <vector>

#include "bmi.h"
using namespace std;

//** CLASS DEFINITION **//

//default constructor
BMI::BMI(){
	patientName = "undefined";
	patientHeight = 99;				//inches
	patientWeight = 99.9;			//lbs
	patientBMI = 99.9;
}

//overload constructor
BMI::BMI(string name, int height, double weight){
	patientName = name;
	patientHeight = height;
	patientWeight = weight;
}

//destructor
BMI::~BMI(){
	//empty
}

//accesstors
string BMI::getName() const{
	return patientName;
}
int BMI::getHeight(){
	return patientHeight;
}
double BMI::getWeight(){
	return patientWeight;
}
double BMI::getBMI(){
	patientBMI = (patientWeight/(patientHeight * patientHeight)) * 703;
	return patientBMI;
}

//mutators
void BMI::setName(string name){
	patientName = name;
}
void BMI::setHeight(int height){
	patientHeight = height;
}
void BMI::setWeight(double weight){
	patientWeight = weight;
}




//** FUNCTIONS **//
void generate(vector<BMI>& vectorname){
	int numObj = 0;

	cout << "How many person to add: ";
	cin >> numObj;

	for(int i = 0; i < numObj; i++){
		cout << "Enter Name: ";
		string nameObj;
		cin >> nameObj;

		cout << "Enter Height (inches): ";
		int heightObj;
		cin >> heightObj;

		cout << "Enter Weight (lbs): ";
		double weightObj;
		cin >> weightObj;

		//instantiate an object from BMI class
		BMI newItem;

		//pass variables to an object
		newItem.setName(nameObj);
		newItem.setHeight(heightObj);
		newItem.setWeight(weightObj);

		//push the object to a vector (create a new element)
		vectorname.push_back(newItem);

		cout << endl;
	}
}

void Print(vector<BMI>& vectorname){
	cout << "--------------" << endl;
	for(unsigned int i = 0; i < vectorname.size(); i++){
		cout << "Patient Name: " << vectorname[i].getName();
		cout << endl;
		cout << "BMI: " << vectorname[i].getBMI();
		cout << endl;

		if(vectorname[i].getBMI() < 18.5){
			cout << "Warning: patient is underweight!";
			cout << endl;
		}

		if(vectorname[i].getBMI() > 25){
			cout << "Warning: patient is overweight!";
			cout << endl;
		}
		cout << endl;
	}
}

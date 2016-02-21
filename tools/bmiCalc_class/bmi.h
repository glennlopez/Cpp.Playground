#include <iostream>
#include <string>
using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI{
private:
	string patientName;
	int patientHeight;		//inches
	double patientWeight;	//lbs
	double patientBMI;

public:
	//default constructor
	BMI();

	//overload constructor
	BMI(string, int, double);

	//destructor
	~BMI();

	//accesstors
	string getName() const;
	int getHeight();
	double getWeight();
	double getBMI();

	//mutators
	void setName(string);
	void setHeight(int);
	void setWeight(double);

};

#endif

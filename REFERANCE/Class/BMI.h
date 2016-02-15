//https://www.youtube.com/watch?v=vz1O9nRyZaY

#include <iostream>
#include <string>
using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI{
public:
	//default constructor (nulls)
	BMI();

	//overload constructor
	BMI(string, int, double);

	//destrictor - clears memory after function is complete
	~BMI();


	//accessor functions - return private vars
	string getName() const;
	int getHeight() const;
	double getWeight() const;

	//mutators - manupulates datatypes in private
	void setName(string);
	void setHeight(int);
	void setWeight(double);
	double calcBMI() const;

private:
	//member variables
	string newName;
	int newHeight;
	double newWeight;
};

#endif

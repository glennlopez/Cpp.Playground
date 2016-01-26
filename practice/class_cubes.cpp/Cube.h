// Header for Cube.cpp: Calculate cube and square

#include <iostream>
using namespace std;

#ifndef CUBE_H
#define CUBE_H

class Cube{
private:
	//class members vars
	double c_width;		// cm
	double c_height;		// cm
	double c_length;		// cm
	double c_volume;		// cm^3

public:
	//constructor
	Cube(){
		c_width = 0.0;
		c_height = 0.0;
		c_length = 0.0;
		c_volume = 0.0;
	}

	//overload constructor
	Cube(double, double, double);
		// width * length * height

	//overload operator "+"
	Cube operator+(Cube rhs);
		// add cubes together to get total volume

	//destructor
	~Cube();

	//accessors
	double getWidth();
	double getHeight();
	double getLength();
	double getVolume();

	//mutators
	void setWidth(double);
	void setHeight(double);
	void setLength(double);
	void setVolume(double);
};

class Square{
private:
	double s_legth;
	double s_height;

public:
	//default constructor
	Square(){

	}

	//overload constructor
	Square(double, double);

	//operator overload +
	Square operator+(Square rhs);

	//destructor
	~Square();

	//accessors


	//mutators

};

#endif

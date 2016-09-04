// Header for Cube.cpp: Calculate cube and square
#include <iostream>
using namespace std;

#ifndef CUBE_H
#define CUBE_H

class Cube{
	/*
		NOTE: This class is responsible for cube data structures only.
				built-in functions for this class are defined in Cube.cpp
	*/
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
};

class Square{
	/*
		NOTE: This class is responsible for square data structures only.
				built-in functions for this class are defined in Cube.cpp
	*/
private:
	double s_legth;
	double s_height;
	double s_area;

public:
	//default constructor
	Square(){
		s_legth = 0.0;
		s_height = 0.0;
		s_area = 0.0;
	}

	//overload constructor
	Square(double, double);

	//operator overload +
	Square operator+(Square rhs);
		// add squares together to get total area

	//destructor
	~Square();

	//accessors
	double getLegth();
	double getHeight();
	double getArea();

	//mutators
	void setLegth(double);
	void setHeight(double);
};

#endif

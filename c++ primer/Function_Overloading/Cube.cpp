#include <iostream>
#include <vector>
#include <string>
#include "Cube.h"

/*	SYNOPSYS:

		Collect x, y, z vars for cubes from user
		Collect x, y vars for squares from user

		Pass variables to an object
		Push the object to a vector

		Calculate when asked
		Draw when asked
		ItemInfo info when asked

*/
using namespace std;
//**CUBE**//

//overload constructor
Cube::Cube(double width, double length, double height){
	c_width = width;
	c_height = height;
	c_length = length;
	c_volume = (c_width * c_height * c_length);
}

//accessors
double Cube::getWidth(){
	return c_width;
}
double Cube::getHeight(){
	return c_height;
}
double Cube::getLength(){
	return c_length;
}
double Cube::getVolume(){
	return c_volume;
}

//destructor
Cube::~Cube(){
	//empty
}

//mutators
void Cube::setWidth(double width){
	c_width = width;
}
void Cube::setHeight(double height){
	c_height = height;
}
void Cube::setLength(double length){
	c_length = length;
}


//**SQUARE**//

//overload constructor
Square::Square(double length, double height){
	s_legth = length;
	s_height = height;
	s_area = (s_legth * s_height);
}

//destructor
Square::~Square(){
	//empty
}

//accessors
double Square::getLegth(){
	return s_legth;
}
double Square::getHeight(){
	return s_height;
}
double Square::getArea(){
	return s_area;
}

//mutators
void Square::setLegth(double length){
	s_legth = length;
}
void Square::setHeight(double height){
	s_height = height;
}





//** FUNCTIONS **//
void Populate(vector<Cube>& vectorname){
	cout << "How many cubes would you like to add: ";
	unsigned int numCubes = 0;
	cin >> numCubes;

	for(unsigned int i = 0; i < numCubes; i++){
		double width, height, length;

		cout << "Cube width: ";
		cin >> width;
		cout << "Cube height: ";
		cin >> height;
		cout << "Cube length: ";
		cin >> length;

		Cube newCube(width, length, height);
		vectorname.push_back(newCube);

		cout << endl;
	}
	cout << endl;
}

void Populate(vector<Cube>& vectorname, double length, double height, double width){
	Cube newCube(width, length, height);
	vectorname.push_back(newCube);
}

void Populate(vector<Square>& vectorname){
	unsigned int numSquares, i;

	cout << "How many squares would you like to add: ";
	cin >> numSquares;

	for(i = 0; i < numSquares; i++){
		double height, length;
		cout << "Square legth: ";
		cin >> length;
		cout << "Square height: ";
		cin >> height;

		Square newSquare(length, height);
		vectorname.push_back(newSquare);

		cout << endl;
	}
	cout << endl;
}

void Populate(vector<Square>& vectorname, double length, double height){
	Square newSquare(length, height);
	vectorname.push_back(newSquare);
}

void ItemInfo(vector<Cube>& vectorname){

	unsigned int size = vectorname.size(), i;
	for(i = 0; i < size; i++){
		cout << "Item " << i + 1 << " ";
		cout << "volume: " << vectorname[i].getVolume()
		<< " Cubed"
		<< endl;
	}
	cout << endl;
}

void ItemInfo(vector<Square>& vectorname){

	unsigned int size = vectorname.size(), i;
	for(i = 0; i < size; i++){
		cout << "Item " << i + 1 << " ";
		cout << "area: " << vectorname[i].getArea()
		<< " Squared"
		<< endl;
	}
	cout << endl;
}

void Draw(vector<Square>& vectorname){
	unsigned int i, size = vectorname.size();

	for(i = 0; i < size; i++){
		//grab parameters from memory
		unsigned int draw_l = vectorname[i].getLegth();
		unsigned int draw_h = vectorname[i].getHeight();

		//draw the square
		unsigned int j, k;
		for(k = 0; k < draw_h; k++){
			for(j = 0; j < draw_l; j++){
				cout << "* ";
			}
			cout << endl;
		}
	}
	cout << endl;
}

void Draw(vector<Cube>& vectorname){
	cout << endl;
	cout << "Error: Cannot draw 3D in 2D yet...";
	cout << endl;
}

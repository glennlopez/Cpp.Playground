//https://www.youtube.com/watch?v=vz1O9nRyZaY

//Function Definitions
#include "BMI.h"		//<-- this is included in all .cpp file

//default constructor
BMI::BMI(){
	newHeight = 0;
	newWeight = 0.0;
}

//constructor overload
BMI::BMI(string name, int height, double weight){
	newName = name;
	newHeight = height;
	newWeight = weight;
}

//destructor
BMI::~BMI(){

}

//accessors
string BMI::getName() const{
	return newName;
}
int BMI::getHeight() const{
	return newHeight;
}
double BMI::getWeight() const{
	return newWeight;
}

//mutators
void BMI::setName(string name){
	newName = name;
}
void BMI::setHeight(int height){
	newHeight = height;
}
void BMI::setWeight(double weight){
	newWeight = weight;
}

//functions
double BMI::calcBMI() const{
	return ((newWeight * 703) / (newHeight * newHeight));
}

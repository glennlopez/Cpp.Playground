#include <iostream>
#include "Person.h"

//default constructors
Person::Person(short p_id, int p_age, int p_weight, int p_height){
	ID = p_id;
	age = p_age;
	weight = p_weight;
	height = p_height;
}


//accessors
int Person::getAge(){
	return age;
}
int Person::getWeight(){
	return weight;
}
int Person::getHeight(){
	return height;
}
short Person::getID(){
	return ID;
}


//mutators
void Person::setAge(int param){
	age = param;
}
void Person::setWeight(int param){
	weight = param;
}
void Person::setHeight(int param){
	height = param;
}
void Person::setID(short param){
	ID = param;
}

Person::~Person(){
	//null
}

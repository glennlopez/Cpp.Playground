#include <iostream>
#include "Human.h"
using namespace std;

//default constructor
Human::Human(){
	name = "?";

	//debug printout
	cout << "~Default Constructor [" << name << "] Executed!" << endl;
}

//constructor overload
Human::Human(string name, int age){
	this->name = name;
	this->age = new int(age);
	//debug printout
	cout << "~Overload Constructor (defaults) [" << name <<  "] Executed!" << endl;
}

//** COPY CONSTRUCTOR **//
Human::Human(const Human &origObj){
	age = new int(*origObj.age);
	name = origObj.name + "Clone";

	//debug printout
	cout << "~Copy Constructor [" << name << "] Executed!" << endl;
}

//deconstructor
Human::~Human(){
	delete age;

	//debug printout
	cout << "~Deconstructor [" << name << "] Executed!" << endl;
}

//mutators
void Human::setName(string name){
	this->name = name;
}
void Human::setAge(int age){
	this->age = new int (age);
}

//accessors
string Human::getName(){
	return name;
}
int Human::getAge(){
	return *age;
}

//functions
void Human::info(){
	cout << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << *age << endl;
	//FIXME: cout << "ID: " << endl; 
	cout << endl;
}

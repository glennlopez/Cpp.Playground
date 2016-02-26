#include <iostream>
#include "Human.h"
using namespace std;

//default constructor
Human::Human(){
	name = "?";
}

//constructor overload
Human::Human(string name, int age){
	this->name = name;
	this->age = new int(age);
	cout << "~Default Overload " << name <<  " Executed!" << endl; //debug printout
}

//copy constructor
Human::Human(const Human &origObj){
	age = new int(*origObj.age);
	name = origObj.name;
	cout << "~Copy Constructor Executed!" << endl; //debug printout
}

//deconstructor
Human::~Human(){
	delete age;
	cout << "~Deconstructor " << name << " Executed!" << endl;	//debug printout
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
	cout << endl;
}

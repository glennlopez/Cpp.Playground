#include <iostream>
#include <string>
using namespace std;

#ifndef HUMAN_H
#define HUMAN_H

class Human{
private:
	int *age;			//pointer for age to heap memory
	string name;

public:
	//default constructor
	Human();

	//constructor overload
	Human(string, int);			//name, age

	//copy constructor
	Human(const Human &orgigName);

	//deconstructor
	~Human();

	//mutators
	void setName(string);
	void setAge(int);

	//accessors
	string getName();
	int getAge();

	//functions
	void info();				//print out function
};

#endif //HUMAN_H

#include <iostream>

#ifndef PERSON_H
#define PERSON_H

class Person{
private:
	int age;
	int weight;
	int height;
	short ID;

public:
	Person(){
		age = 0;
		weight = 0;
		height = 0;
		ID = 0;
	}

	//default constructors
	Person(short, int, int, int);
		//ID, age, weight, height

	//overload constructors
		//NULL

	//accessors
	int getAge();
	int getWeight();
	int getHeight();
	short getID();

	//mutators
	void setAge(int);
	void setWeight(int);
	void setHeight(int);
	void setID(short);

	//distructors
	~Person();


};

#endif

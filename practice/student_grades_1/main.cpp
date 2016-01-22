//https://www.youtube.com/watch?v=iPlW5tSUOUM

#include <iostream>
#include <vector>
#include <string>

#include "Students.h"
#include "Students.cpp"
using namespace std;

void fillVector(vector<Students>&);
	//fillVector - fill in student information
	//@param vector<Setudents>& - students in class

void printVector(const vector<Students>&);
	//print vector - prints all objects in class
	//@param const vector<Students>& - students in class




//** MAIN **//
int main(){
	vector<Students> myClass;

	fillVector(myClass);
	printVector(myClass);

	cout << endl;
	return 0;
}





//** FUNCTION DEFINITIONS **//
void fillVector(vector<Students>& newMyClass){
	string name;
	char grade;

	cout << "How many students are in your class? ";
	int classSize;
	cin >> classSize;

	for(int i = 0; i < classSize; i++){
		cout << "Enter Student Name: ";
		cin >> name;

		cout << "Enter Student Grade: ";
		cin >> grade;

		//pass everything to the vector
		Students newStudent(name, grade);
		newMyClass.push_back(newStudent);
		cout << endl;
	}
	cout << endl;
}

void printVector(const vector<Students>& newMyClass){
	unsigned int size = newMyClass.size();

	for(unsigned int i = 0; i < size; i++){
		cout << "Student Name: " << newMyClass[i].getName() << endl;
		cout << "Student Grade: " << newMyClass[i].getGrade() << endl;
	}


}

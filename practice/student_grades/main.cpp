//https://www.youtube.com/watch?v=iPlW5tSUOUM

#include <iostream>
#include <vector>
#include <string>

#include "Students.h"
using namespace std;

void fillVector(vector<Students>&);
	//fillVector - fill in student information
	//@param vector<Setudents>& - students in class

int main(){
	vector<Students> myClass;


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
}

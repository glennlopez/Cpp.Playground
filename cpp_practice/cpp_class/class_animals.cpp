/*
	This practice session is focused on re-enforcing what I learned on
	7.5.1 through 7.6.1

		Goal is to create a class that describes an animal
		using a vactor to create multiple entries as per user.

		we can think of the vector as a cage that can house only 1 animal
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal{
	public:
		//mutators
		void setType(string param);
		void setName(string param);
		void setColor(string param);
		void setLimbs(int param);
		void setWeight(double lbs);
		void setAge(int years);

		//accessors
		string getType();
		string getName();
		string getColor();
		int getLimbs();
		double getWeight();
		int getAge();

		//constructors
		Animal();

	private:
		string type;		//type of animal (dog, cat, horse)
		string name;		//the animals given name (barney)
		string color;		//animals color
		int limbs;			//how many limbs the animal heads
		double weight;		//animals wieght
		int age;				//how old the animal is in years
};

//default constructor
Animal::Animal(){
	type = "undefined";
	name = "undefined";
	color = "undefined";
	limbs = -1;
	weight = -1.0;
	age = -1;
}


//mutators
void Animal::setType(string param){
	type = param;
}
void Animal::setName(string param){
	name = param;
}
void Animal::setColor(string param){
	color = param;
}
void Animal::setLimbs(int param){
	limbs = param;
}
void Animal::setWeight(double lbs){
	weight = lbs;
}
void Animal::setAge(int years){
	age = years;
}

//accessors
string Animal::getType(){
	return type;
}
string Animal::getName(){
	return name;
}
string Animal::getColor(){
	return color;
}
int Animal::getLimbs(){
	return limbs;
}
double Animal::getWeight(){
	return weight;
}
int Animal::getAge(){
	return age;
}


//** Main **//
int main() {

	int cageNum = 10;	//<-- set the number of cages available
	vector<Animal> cage(cageNum);

	cout << "How many animals do you want (10 max): ";
	cin >> cageNum;

	string type = "?";
	string name = "?";
	string color = "?";
	int limbs = 0;
	double weight = 0.0;
	int age = 0;

	//set animal
	for(int i = 0; i < cageNum; i++){
		cout << "ANIMAL #" << i + 1 << endl;

		cout << "Animal Type: ";
		cin >> type;
		cage.at(i).setType(type);

		cout << "Animal Name: ";
		cin >> name;
		cage.at(i).setName(name);

		cout << endl;
	}

	//get animals
	for(int i = 0; i < cageNum; i++){
		cout << "---------------" << endl;
		cout << "ANIMAL #" << i + 1 << endl;
		cout << "Type: " << cage.at(i).getType() << endl;
		cout << "Name: " << cage.at(i).getName() << endl;
		cout << "---------------" << endl;
		cout << endl;
	}


	cout << endl;
	return 0;
}

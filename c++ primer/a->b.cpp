//see Pointers > heap_memory_class.cpp

#include <iostream>
#include <string>
using namespace std;

class Character{
private:
	string name;
	int age;
	string *weapon;

public:
	//defualt Constructor
	Character(){
		name = "?";
		age = 0;
		weapon = new string[2];

		//debug output
		cout << "~Default Constructor [" << name << "] executed!" << endl;
	}

	//default overload
	Character(string name, int age){
		this->name = name;
		this->age = age;
		weapon[0] = "?";
		weapon[1] = "?";
		//debug output
		cout << "~Overload Constructor [" << name << "] executed!" << endl;
	}

	//mutators
	void setAge(int age){
		this->age = age;
	}

	void setName(string name){
		this->name = name;
	}

	void setWeapon(char slot, string param){
		if(slot == 'a'){
			weapon[0] = param;
		}
		if(slot == 'b'){
			weapon[1] = param;
		}
	}


	//accessors
	int getAge(){
		return age;
	}

	string getName(){
		return name;
	}

	string getWeapon(char slot){
		if(slot == 'a'){
			return weapon[0];
		}
		if(slot == 'b'){
			return weapon[1];
		}
		else{
			return "Error!";
		}
	}

	//distrucor
	~Character(){
		delete []weapon;

		//debug output
		cout << "~Destructor [" << name << "] executed!" << endl;
	}

};

int main(){
	/*
	The a->b is a shortcut for (*a).b and is primarly used for classes
	that are constructed inside heap memory (a pointer).
	*/

	Character *Glenn;
	Glenn = new Character;

//SET
	Glenn->setName("Glenn");
	(*Glenn).setAge(12);
	(*Glenn).setWeapon('a', "Axe");

//GET
	cout << Glenn->getName() << endl;
	cout << Glenn->getAge() << endl;
	cout << (*Glenn).getWeapon('a') << endl;



	cout << endl;
	return 0;
}

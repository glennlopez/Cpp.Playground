#include <iostream>
#include <string>
using namespace std;

//this is a practice for using the new operator
class Human{
private:
	string name;	short age;

public:
	Human(){
		name = "?"; 	age = 0;
	}
	Human(string u_name, short u_age){
		age = u_age; 	name = u_name;
	}
	void setAge(short u_age){
		age = u_age;
	}
	void setName(char u_name){
		name = u_name;
	}
	string getName(){
		return name;
	}
	short getAge(){
		return age;
	}
};


#define SetGlennAge(x) glenn->setAge(x);

//** MAIN **//
int main(){

	Human *glenn;
	glenn = new Human;

	SetGlennAge(12);
	cout << glenn->getAge() << endl;



	cout << endl;
	return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Character{
private:
	string cName;
	unsigned int cAge;

public:
	//constructor
	Character(){
		cName = "?";
		cAge = -1;
	}

	//constructor overload
	Character(string name, unsigned int age){
		cName = name;
		cAge = age;
	}

	//accessors
	int getAge(){
		return cAge;
	}

	string getName(){
		return cName;
	}

	//mutators
	void setAge(int age){
		cAge = age;
	}

	void setName(string name){
		cName = name;
	}
};



//** MAIN **//
int main(){
	vector<Character> dbz;

	dbz.setName("poophan");


	cout << endl;
	return 0;
}

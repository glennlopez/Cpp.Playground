#include <iostream>
#include <string>
using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class Character{
private:
	string name;
	int health;
	string *weapon;		//<-- heap memory data

public:
	Character();
	~Character();
	Character(string, int);

	void setName(string);
	void setHealth(int);
	void setWeaponA(string);

	string getName();
	int getHealth();
	string getWeaponA();

};

#endif //CHARACTER_H

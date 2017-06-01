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
	void setWeapon(char, string);

	string getName();
	int getHealth();
	string getWeapon(char);

};

#endif //CHARACTER_H

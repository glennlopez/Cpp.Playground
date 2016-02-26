#include <iostream>
#include "Character.h"
//using namespace std;

//Default Constructor
Character::Character(){
	const int BAG_SIZE = 2;
	name = "?";
	health = 0;
	weapon = new string[BAG_SIZE];
}

//Constructor overload
Character::Character(string n, int x){
	name = n;
	health = x;
}

//destructor
Character::~Character(){
	delete []weapon;
}

//Mutators
void Character::setName(string a){
	name = a;
}
void Character::setHealth(int x){
	health = x;
}
void Character::setWeapon(char param, string z){
	if(param == 'a'){
		weapon[0] = z;
	}
	if(param == 'b'){
		weapon[1] = z;
	}
}

//Accessors
string Character::getName(){
	return name;
}
int Character::getHealth(){
	return health;
}
string Character::getWeapon(char param){
	if(param == 'a'){
		return weapon[0];
	}
	if(param == 'b'){
		return weapon[1];
	}
	else{
		return "Error: Bag space does not exist!";
	}
}

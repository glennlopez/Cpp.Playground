#include <iostream>
#include "Character.h"
//using namespace std;

//Constructor
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
void Character::setWeaponA(string z){
	weapon[0] = z;
}

//Accessors
string Character::getName(){
	return name;
}
int Character::getHealth(){
	return health;
}
string Character::getWeaponA(){
	return weapon[0];
}

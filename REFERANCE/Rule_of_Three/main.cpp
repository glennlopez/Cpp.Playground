#include <iostream>
#include "Character.h"
#include "Character.cpp"

/* See https://www.youtube.com/watch?v=F-7Rpt2D-zo for
 * and explaination on how this works, and why we use it
 * See https://www.youtube.com/watch?v=PXcRe-W2w7s for
 * how its implemented
 */

int main(){
	using std::endl;
	using std::cout;

	Character player1;
	player1.setName("Glenn");
	player1.setHealth(100);
	player1.setWeaponA("Axe");

	Character player2;
	player2 = player1;

	//Data output
	cout <<
		"Name: " <<
		player2.getName() <<
	endl;
	cout <<
		"Health: " <<
		player2.getHealth() <<
	endl;
	cout <<
		"Weapon Slot A: " <<
		player1.getWeaponA() <<
	endl;


	cout << endl;
	return 0;
}

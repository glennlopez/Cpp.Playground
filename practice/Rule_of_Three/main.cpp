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
	player1.setWeapon('b',"Axe");

	//Character player2;
	//player2 = player1;

	//Data output
	cout <<
		"Name: " <<
		player1.getName() <<
	endl;
	cout <<
		"Health: " <<
		player1.getHealth() <<
	endl;
	cout <<
		"Weapon: " <<
		player1.getWeapon('c') <<
	endl;


	cout << endl;
	return 0;
}

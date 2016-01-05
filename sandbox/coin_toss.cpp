/*
	Chapter 1 - 7.2 knowledge practice:

	2 Player coin toss game:
	This practice session is focused on generating a cointoss game
	between 2 players. Each player will take turns guessing heads or
	tails. The first person to guess 5 correctly, wins.

		CoinToss
			- playerName
			- score
			- tossCoin
*/

#include <iostream>
#include <string>
#include <stdlib.h>		//required to run rand()
#include <time.h>			//used for rand()
using namespace std;

class CoinToss{
	public:
		void setDefault();
		void setPlayerName(string param);
		void addScore(int modifier);
		bool tossCoin();

		string getPlayerName();
		int getScore();

	private:
		string playerName;
		int score;
		bool coin;
};

void CoinToss::setDefault(){
	score = 0;
	playerName = "undefined";
}
void CoinToss::setPlayerName(string param){
	playerName = param;
}
void CoinToss::addScore(int modifier){
	score = score + modifier;
}
bool CoinToss::tossCoin(){
	srand (time(NULL));
	return rand() % 2;
}
string CoinToss::getPlayerName(){
	return playerName;
}
int CoinToss::getScore(){
	return score;
}



//** MAIN **//
int main(int argc, char const *argv[]) {
	//create player objects
	CoinToss player1;
	CoinToss player2;

	//set defaults
	player1.setDefault();
	player2.setDefault();

	//Ask for players name
	string p1, p2;
	cout << "Player 1: ";
	getline(cin, p1);
	player1.setPlayerName(p1);

	cout << "Player 2: ";
	getline(cin, p2);
	player2.setPlayerName(p2);

	//iterate until player 1 or player 2 score >= 5;
	do{


	}while(
		!(((player1.getScore() >= 5)) || ((player2.getScore() >= 5)))
	);


	//declar winner

	cout << endl;
	return 0;
}

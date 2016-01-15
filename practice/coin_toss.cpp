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

void AskPlayer1(){
	CoinToss player1;
	char playerChoice = '?';

	//system("clear");
	cout << "Player 1: " << player1.getPlayerName() << endl;
	cout << "Heads or Tails (h/t): ";
	cin >> playerChoice;

	switch (playerChoice) {
		case 'h':
		if(player1.tossCoin() == 1){
			cout << "Its heads. You gain 1 point!" << endl;
			player1.addScore(1);
		}
		else{
			cout << "Sorry, it landed on tails." << endl;
		}
		break;

		case 't':
		if(player1.tossCoin() == 0){
			cout << "Its tails. You gain 1 point!" << endl;
			player1.addScore(1);
		}
		else{
			cout << "Sorry, it landed on heads." << endl;
		}
		break;

		default:
		break;
			}
	cout << endl;
}

void AskPlayer2(){
	CoinToss player2;
	char playerChoice = '?';

	cout << "Player 2: " << player2.getPlayerName() << endl;
	cout << "Heads or Tails (h/t): ";
	cin >> playerChoice;

	switch (playerChoice) {
		case 'h':
		if(player2.tossCoin() == 1){
			cout << "Its heads. You gain 1 point!" << endl;
			player2.addScore(1);
		}
		else{
			cout << "Sorry, it landed on tails." << endl;
		}
		break;

		case 't':
		if(player2.tossCoin() == 0){
			cout << "Its tails. You gain 1 point!" << endl;
			player2.addScore(1);
		}
		else{
			cout << "Sorry, it landed on heads." << endl;
		}
		break;

		default:
		break;
			}
	cout << endl;
}

void AskPlayerName(){
	CoinToss player1;
	CoinToss player2;

	//Ask for players name
	string p1, p2;
	cout << "Player 1: ";
	getline(cin, p1);
	player1.setPlayerName(p1);

	cout << "Player 2: ";
	getline(cin, p2);
	player2.setPlayerName(p2);
}


//** MAIN **//
int main(int argc, char const *argv[]) {
	//create player objects
	CoinToss player1;
	CoinToss player2;

	//set defaults
	player1.setDefault();
	player2.setDefault();

	do{
		AskPlayer1();
			cout << player1.getScore();
		AskPlayer2();
	}while(
		!(((player1.getScore() >= 5)) || ((player2.getScore() >= 5)))
	);

	cout << endl;
	return 0;
}

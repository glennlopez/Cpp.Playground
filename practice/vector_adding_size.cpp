// Practice session: using void AddMore(vector<int>& players, int playerNum)
#include <iostream>
#include <vector>
using namespace std;


void AddMore(vector<int>& players, int playerNum){
	players.push_back(playerNum);
}



int main(){
	vector<int> players;
	int playerNumber = 124;

	AddMore(players, playerNumber);
	AddMore(players, 12);

	cout << players.size() << endl;
	cout << players.at(0) << endl;
	cout << players.at(1) << endl;

	cout << endl;
	return 0;
}

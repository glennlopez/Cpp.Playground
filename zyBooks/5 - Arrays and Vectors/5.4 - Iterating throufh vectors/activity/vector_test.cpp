#include <iostream>
#include <vector>
using namespace std;



int main() {

	int vecSize = 0;

	cout << "How many players: ";
	cin >> vecSize;

	vector<string> player(vecSize);

	//collect player info
	for (int i = 0; i < vecSize; i++){
		cout << "Player " << i + 1 << ": ";
		cin >> player.at(i);
	}

	//print player
	for (int i = 0; i < vecSize; i++){
		cout << player.at(i) << " ";
	}

	cout << endl;

}

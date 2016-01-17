#include <iostream>
#include <vector>
using namespace std;

class AddMore{
private:
	int size;

public:
	AddMore(vector<int>& players, int jerseyNum){
		players.push_back(jerseyNum);
		size = players.size();
	}

	void Add(int addSize){
		size = size + addSize;
	}
};

void Print(vector<int>& vector){
	unsigned int i = 0;
	for(i = 0; i < vector.size(); i++){
		cout << vector.at(i) << endl;
	}
}

int main(){
	vector<int> players;
	vector<int> teams;
	AddMore(players, 13);
	AddMore(players, 23);
	AddMore(teams, 1);
	AddMore(teams, 12);

	Print(teams);

	// cout << players.at(0) << endl;
	// cout << players.at(1) << endl;
	// cout << teams.at(0) << endl;
	// cout << teams.at(1) << endl;


	return 0;
}

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

};

int main(){
	vector<int> players;
	vector<int> teams;
	AddMore(players, 13);
	AddMore(players, 23);

	cout << players.at(0) << endl;
	cout << players.at(1) << endl;


	return 0;
}

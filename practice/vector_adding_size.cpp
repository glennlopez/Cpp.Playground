// Practice session: using void PlayersAdd(vector<int>& players, int playerNum)
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int vecSize;
	vector<int> myvector(vecSize);


	vecSize = 10;

	myvector.push_back(10); cout << myvector.at(0) << endl;
	myvector.push_back(20);	cout << myvector.at(1) << endl;

	cout << myvector.size();

	cout << endl;
	return 0;
}

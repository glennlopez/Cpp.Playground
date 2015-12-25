#include <iostream>
#include <vector>
using namespace std;

/* Change smallest to biggest */
void swapOut(vector<int>& vecNum){
	int i = 0;
	int tempVal = vecNum.at(0);
	for (i = 0; i < vecNum.size() / 2; i++){
		tempVal = vecNum.at(i);
		vecNum.at(i) = vecNum.at(vecNum.size() - 1 -i);
		vecNum.at(vecNum.size() - 1 -i) = tempVal;
	}

	return;
}

void vecOut(const vector<int>& vecNum){
	int i = 0;
	cout << "Output: ";
	for (i = 0; i < vecNum.size(); i++){
		cout << vecNum.at(i) << " ";
	}
	return;
}

int main(int argc, char const *argv[]) {

	//vector size
	const int VNUM = 8;

	//vector names
	vector<int> userNum(VNUM);

	//loop vars
	int i = 0;

	//populate vector
	for (i = 0; i < VNUM; i++){
		cout << "Value " << i + 1 << ": ";
		cin >> userNum.at(i);
	}

	swapOut(userNum);
	vecOut(userNum);


	cout << endl;
	return 0;
}

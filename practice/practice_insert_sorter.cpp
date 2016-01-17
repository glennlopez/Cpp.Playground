//Practice session for: 7.12.6
//https://zybooks.zyante.com/#/zybook/ProgrammingInCppR11/chapter/7/section/12

#include <iostream>
#include <vector>
using namespace std;

/*
	Run the program and observe the output to be: 55 4 250 19. Modify the numsInsert function to insert each item in sorted order. The new program should output: 4 19 55 250

		using vector.insert(vector.begin() + x, x);
*/

void numsInsert(vector<int>& numsList, int numVal){
	unsigned int i = 0;
	for(i = 0; i < numsList.size(); i++){
		if(numVal < numsList.at(i)){
			numsList.insert(numsList.begin() + i, numVal);
			break;
		}
	}

	if(i == numsList.size()){
		numsList.push_back(numVal);
	}

}

void numsPrint(const vector<int>& numsList){
	unsigned int i = 0;
	for(i = 0; i < numsList.size(); i++){
		cout << numsList.at(i) << " ";
	}
	cout << endl;
}

int main(){
	// DO NOT MODIFY BELOW

	vector<int> numsList;
   numsInsert(numsList, 55);
   numsInsert(numsList, 4);
   numsInsert(numsList, 250);
   numsInsert(numsList, 19);
   numsPrint (numsList);

	return 0;
}

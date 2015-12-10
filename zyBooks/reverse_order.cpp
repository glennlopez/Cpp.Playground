#include <iostream>
#include <vector>
using namespace std;

/*
	Reversing the order of a List:
	ie: 32 14 90 2 21 34 16
	becomes: 16 34 21 2 90 14 32
*/

int main(int argc, char const *argv[]) {

	int i = 0;
	int swapMem = 0;

	const int LISTNUM = 7;
	vector<int>list(LISTNUM);

	//pre-populate vector elements
	list.at(0) = 32;
	list.at(1) = 14;
	list.at(2) = 90;
	list.at(3) = 2;
	list.at(4) = 21;
	list.at(5) = 34;
	list.at(6) = 16;

	//output original
	for(i = 0; i < LISTNUM; i++){
		cout << list.at(i) << " ";
	}
	cout << endl;

	/*
		NOTE: we /2 because we only need to make the swap
		by half the number of elements in the vector.
	*/

	for (i = 0; i < (LISTNUM/2); i++){
		//put last number in swapMem
		swapMem = list.at((LISTNUM - 1) - i);

		//put current number in last
		list.at((LISTNUM - 1) - i) = list.at(i);

		//put swap number in first
		list.at(i) = swapMem;
	}

	//output modified
	for(i = 0; i < LISTNUM; i++){
		cout << list.at(i) << " ";
	}

	cout << endl;
	return 0;
}

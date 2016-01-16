//Practice session for: 7.12.6
//https://zybooks.zyante.com/#/zybook/ProgrammingInCppR11/chapter/7/section/12

#include <iostream>
#include <vector>
using namespace std;

/*
	Run the program and observe the output to be: 55 4 250 19. Modify the numsInsert function to insert each item in sorted order. The new program should output: 4 19 55 250

		using vecotr.insert(vector.begin() + x, x);
*/

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

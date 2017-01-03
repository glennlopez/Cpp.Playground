#include <iostream>
#include <vector>
using namespace std;

/*
	Write three statements to print the first three elements of vector runTimes. Follow each with a newline. Ex: If runTime = {800, 775, 790, 805, 808}, print:

		800
		775
		790
*/

int main() {
   vector<int> runTimes(5);

   // Populate vector
   runTimes.at(0) = 800;
   runTimes.at(1) = 775;
   runTimes.at(2) = 790;
   runTimes.at(3) = 805;
   runTimes.at(4) = 808;

   /* Your solution goes here  test */
	unsigned int i, list;

	i = 0;
	list = 2; 	//0,1,2

	do{
		cout << runTimes.at(i) << endl;
	}
	while(i++ < list);

   return 0;
}


#include <iostream>
#include <vector>
using namespace std;

/*
	Complete the code to compute the average of the vector's element values. The result should be 16.
*/

int main() {
   const int VALS_SIZE = 6;
   vector<int> valsVctr(VALS_SIZE);
   int i = 0;
   int sumVal = 0;
   int avgVal = 0;

   valsVctr.at(0) = 30;
   valsVctr.at(1) = 20;
   valsVctr.at(2) = 20;
   valsVctr.at(3) = 15;
   valsVctr.at(4) = 5;
   valsVctr.at(5) = 10;

   sumVal = 0;
   /* FIXME: Write for loop to iterate through vector */
	for (i = 0; i < VALS_SIZE; i++){
		sumVal = sumVal + valsVctr.at(i);
	}

   avgVal = sumVal / VALS_SIZE;

   cout << "Avg: " << avgVal << endl;

   return 0;
}

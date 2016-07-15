#include <iostream>
#include <vector>
using namespace std;

/*		MULTIPLES OF 3 AND 5
	If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

	Find the sum of all the multiples of 3 or 5 below 1000.
*/

int main(){

	unsigned int i, sum, limit;
	vector<int> uNums;

	sum = 0;
	limit = 1000;

	for(i = 1; i < limit; i++){
		if(!(i % 3)){
			uNums.push_back(i);
			sum = sum + i;
		}
		else if(!(i % 5)){
			uNums.push_back(i);
			sum = sum + i;
		}
	}

	for(i = 1; i < uNums.size(); i++){
		cout << uNums.at(i) << " ";
	}

	cout << "sum: " << sum;

	cout << endl;
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main(){

	//Format for vector: vector<Datatype> vectorName;
	vector<int> myVector; //<-- will resize auto if you add in

	myVector.push_back(3); //<-- here we add 3 to myVector vector
	myVector.push_back(2);
	myVector.push_back(5);


	//print-out the vector
	for(unsigned int i = 0; i < myVector.size(); i++){
		//cout << myVector.at(i); //<-- uses vector for access
		cout << myVector[i] << " "; //<-- uses array for access
	}

	cout << endl;
	return 0;
}

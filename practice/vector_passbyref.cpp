//https://www.youtube.com/watch?v=ReWNqNAhlkY
#include <iostream>
#include <vector>
using namespace std;

/*	ABOUT VECTORS:

	Format for vector: vector<Datatype> vectorName;

	myVector.push_back(value); <-- adds "value" at the end of vector
	myVector.at(i); 				<-- returns item located at myVector[i]
	myVector.size();				<-- returns the size of the vector
	myVector.begin();				<-- reads vector from first element
	myVector.clear();				<-- removes all elements in vector
	myVector.empty();				<-- returns 1 or 0 if its empty

	myVector.insert();			<-- insers vector at specified spot
	myVector.erase();				<-- removes vector at specified spot

	myVector.insert(myVector.begin() +i, value);
	myVector.erase(myVector.begin() +i);

*/

void Fill(vector<int>& vectorname);
void Print(const vector<int>& vectorname);


int main(){
	vector<int> myVector;

	Fill(myVector);
	Print(myVector);

	cout << endl;
	return 0;
}

void Fill(vector<int>& vectorname){
	int usrNum = 0;

	while(usrNum != -1){
		cout << "Enter numbers (-1 to stop): ";
		cin >> usrNum;
		vectorname.push_back(usrNum);
	}
	//remove last element (-1)
	vectorname.erase(vectorname.begin() + vectorname.size() -1);

	//remove number 13 from the vector
	unsigned int i = 0;
	for(unsigned int j = 0; j < vectorname.size(); j++){

		for(i = 0; i < vectorname.size(); i++){
			if(vectorname.at(i) == 13){
				vectorname.erase(vectorname.begin() + i);
			}
		}
	}

}

void Print(const vector<int>& vectorname){
	unsigned int i = 0;
	cout << "Your Numbers: ";
	for(i = 0; i < vectorname.size(); i++){
		cout << vectorname[i] << ", ";
	}

}

#include <iostream>
#include <vector>
using namespace std;
void factorsOf(int x){
	//testing for number 18 as a multiple of...
	int uNum, i, j, gcf_num, temp;
	uNum = x;
	vector<int> multiples(uNum);
	vector<int> output(0);


	//populate vector with gcf
	for(i = uNum; i > 0; i--){
		gcf_num = gcf(uNum, i);
		multiples.at(i-1) = gcf_num;
	}

	//sort vectors
	for(i = 0; i < uNum-1; i++){
		for(j = 0; j < uNum-1; j++){
			if(multiples.at(j+1) < multiples.at(j)){
				temp = multiples.at(j);
				multiples.at(j) = multiples.at(j+1);
				multiples.at(j+1) = temp;
			}
		}
	}

	//copy non-duplicates to a new vector
	for(i = 0; i < uNum-1; i++){
		if(multiples.at(i+1) != multiples.at(i)){
			output.push_back( multiples.at(i));
		}
	}

	//print out vector
	for(unsigned int i = 0; i < output.size(); i++){
		cout << output.at(i) << " ";
	}
}

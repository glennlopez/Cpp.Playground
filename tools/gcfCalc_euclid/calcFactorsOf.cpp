/*
	THIS CAN BE IMPROVED: The current version of this is slow and cpu taxing.
	This is just a quick solution for finding factors of numbers below 1000
		Note: The bottle-neck is the sorting algorythm
*/

#include <iostream>
#include <vector>
//#include "calcGCF.cpp"  	//<-- THIS FUNCTION REQUIRES calcGCF.cpp dependency
using namespace std;
void factorsOf(int x){

	int uNum, i, j, gcf_num, temp;
	uNum = x;
	vector<int> multiples(uNum);		//<-- stores raw factors
	vector<int> output(0);				//<-- stores non-repeting factors


	//populate vector with gcf
	for(i = uNum; i > 0; i--){
		gcf_num = gcf(uNum, i);
		multiples.at(i-1) = gcf_num;
	}

	//sort vectors (allows us to copy non-repeting nums to a new vector)
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
			output.push_back(multiples.at(i));
		}
	}

	//print out vector
	for(unsigned int i = 0; i < output.size(); i++){
		cout << output.at(i) << " ";
	}
}

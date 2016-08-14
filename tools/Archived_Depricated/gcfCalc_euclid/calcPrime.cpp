//This is a prime number calculator using Euclids Algorythm
#include <iostream>
#include <vector>
//#include "calcGCF.cpp"				//<-- used in calcFactorsOf.cpp (Euclids Algo)
using namespace std;

int calcPrime(int x){

	int uNum, i, j, gcf_num, temp;
	bool isPrime;
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

	//find the size of the new vector
		//if its more than 1 then its not a prime number
		//else, its a prime number

	if(output.size() > 1){
		isPrime = 0;
	}
	else{
		isPrime = 1;
	}

return isPrime;
}

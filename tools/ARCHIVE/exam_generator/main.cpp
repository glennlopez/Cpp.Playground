#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

	const int Q_LIMIT = 10;

	int numGen, i,j;
	int bankedQuestions[Q_LIMIT];
	srand (time(NULL));


	//randon number generator
	for(i = 0; i <= Q_LIMIT - 1; i++){
		numGen = (rand() % 10 + 1);
		bankedQuestions[i] = numGen;
	}



	cout << bankedQuestions[0] << endl;
	cout << bankedQuestions[1] << endl;
	cout << bankedQuestions[2] << endl;
	cout << bankedQuestions[3] << endl;
	cout << bankedQuestions[4] << endl;
	cout << bankedQuestions[5] << endl;
	cout << bankedQuestions[6] << endl;
	cout << bankedQuestions[7] << endl;
	cout << bankedQuestions[8] << endl;
	cout << bankedQuestions[9] << endl;



	cout << endl;
	return 0;
}

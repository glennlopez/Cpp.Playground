#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//prototypes
int CoinToss();

int main(){

	int temp = 0;

	cout << "Ask your question: " << endl;
	cin >> temp;

	if(1){
		cout << "No.. Sleep in!" << endl;
	}

	else{
		cout << "Yes, Go to Work." << endl;
	}



	cout << endl;
	return 0;
}

//Functions
int CoinToss(){
	int result = 0;

	srand(time(0));
	result = rand() % 101;

	return result;
}

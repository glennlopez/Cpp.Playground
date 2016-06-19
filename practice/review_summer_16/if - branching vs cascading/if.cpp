#include <iostream>
using namespace std;
// cascading if statements

typedef unsigned int uint;

int main(){
	int user_num = 0;

	cout << "Enter your age: ";
	cin >> user_num;

	if(user_num < 0){
		cout << "No negative values allowed!";
		cout << endl;
	}
	if(user_num <= 18){
		cout << "Not old enough to join the army";
		cout << endl;
	}
	if(user_num <= 21){
		cout << "Not old enough to drink.";
		cout << endl;
	}
	if((user_num <= 40) && (user_num > 21)){
		cout << "Old enough to join the army and drink.";
		cout << endl;
	}
	if((user_num >= 40) && (user_num < 50)){
		cout << "Close to retirement age.";
		cout << endl;
	}
	if(user_num >= 80){
		cout << "Too old to join.";
		cout << endl;
	}

	else{
		cout << "Error: Age undefined!";
		cout << endl;
	}

	return 0;
}

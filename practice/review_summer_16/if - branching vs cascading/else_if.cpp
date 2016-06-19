#include <iostream>
using namespace std;
// branching if statements
// https://zybooks.zyante.com/#/zybook/ProgrammingInCppR11/chapter/3/section/3

typedef unsigned int uint;

int main(){
	int user_num = 0;

	cout << "Enter your age: ";
	cin >> user_num;

	if(user_num < 0){
		cout << "No negative values allowed!";
		cout << endl;
	}
	else if(user_num <= 18){
		cout << "Not old enough to join the army";
		cout << endl;
	}
	else if(user_num <= 21){
		cout << "Not old enough to drink.";
		cout << endl;
	}
	else if((user_num <= 40) && (user_num > 21)){
		cout << "Old enough to join the army and drink.";
		cout << endl;
	}
	else if((user_num >= 40) && (user_num < 50)){
		cout << "Close to retirement age.";
		cout << endl;
	}
	else if(user_num >= 80){
		cout << "Too old to join.";
		cout << endl;
	}

	else{
		cout << "Error: Age undefined!";
		cout << endl;
	}

	return 0;
}

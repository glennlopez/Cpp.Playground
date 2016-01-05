#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/*
	This practice session is concentrated on manipulating classes.
	The scenario: a simple bank teller machine that allows 1 user to:
		[x] See Account information
		[x] Deposit money
		[x] Withdraw money
		[x] Menu for manipulation

	Bonus:
		[ ] Allow user to add chequing, savings, or joint accounts
		[ ] Allow users to add more users accounts
*/


class BankOfGlenn{
	public:
		//account manipulators
		void WithdrawAction(double modifier);		//Withdraw
		void DepositeAction(double modifier);		//deposit

		//account information
		void DisplayInfo(); 						//print info gui
		void AccID(int param);					//account id
		void AccBal(double param);				//account ballance
		void SetFname(string param);			//first name
		void SetLname(string param);			//last name
	private:
		int accountid;
		double accountballance;
		string firstname;
		string lastname;
};

void BankOfGlenn::WithdrawAction(double modifier){
	accountballance -= modifier;
}

void BankOfGlenn::DepositeAction(double modifier){
	accountballance += modifier;
}

//** CLASS DEFINES **//
void BankOfGlenn::SetLname(string param){
	lastname = param;
}

void BankOfGlenn::SetFname(string param){
	firstname = param;
}

void BankOfGlenn::AccBal(double param){
	accountballance = param;
}

void BankOfGlenn::AccID(int param){
	accountid = param;

}

void BankOfGlenn::DisplayInfo(){
	system("clear");
	cout << "------------------------" << endl;
	cout << "Account ID: " << accountid << endl;
	cout << "Account Holder: " << firstname << " " << lastname << endl;
	cout << "Ballance: " << accountballance << endl;
	cout << "------------------------" << endl;
}



//** FUNCTIONS **//
void AskUserName(string& fn_param, string& ln_param){
	cout << "Banker Name (firstname lastname): ";
	cin >> fn_param;
	cin >> ln_param;
}



//** MAIN **//
int main(int argc, char const *argv[]) {

	BankOfGlenn myAccount;
	string fn_param = "?";
	string ln_param = "?";

	//setup initial information
	AskUserName(fn_param, ln_param);

	myAccount.AccID(1234567);
	myAccount.AccBal(100.50);
	myAccount.SetFname(fn_param);
	myAccount.SetLname(ln_param);

	//display menu
	char usrChoice = '?';
	double modifier;
	bool display = 1;

	do {
			myAccount.DisplayInfo();
			cout << "Make a selection(w/d/q): ";
			cin >> usrChoice;

			switch (usrChoice) {
				case 'w':
				system("clear");
				myAccount.DisplayInfo();
				cout << "How much to withdraw: ";
				cin >> modifier;
				cout << endl;
				myAccount.WithdrawAction(modifier);
				myAccount.DisplayInfo();
				break;

				case 'd':
				system("clear");
				myAccount.DisplayInfo();
				cout << "How much to deposit: ";
				cin >> modifier;
				cout << endl;
				myAccount.DepositeAction(modifier);
				myAccount.DisplayInfo();
				break;

				case 'q':
				myAccount.DisplayInfo();
				display = 0;
				break;

				default:
				myAccount.DisplayInfo();
				break;
		}
	}while (display);
	return 0;
}

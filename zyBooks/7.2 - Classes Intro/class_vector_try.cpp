#include <iostream>
#include <string>
using namespace std;

class user {
	public:
		void SetFirstName(string Fparam);
		void SetLastName(string Lparam);
		void PrintName();
	private:
		string firstname;
		string lastname;
};

void user::SetFirstName(string Fparam){
	firstname = Fparam;
}

void user::SetLastName(string Lparam){
	lastname = Lparam;
}

void user::PrintName(){
	cout << firstname << " " << lastname;
	cout << endl;
}

void AskUser(string& fname, string& lname){
	cout << "First Name (player1): ";
	cin >> fname;
//	player1.SetFirstName(fname);

	cout << "Last Name (player1): ";
	cin >> lname;
//	player1.SetLastName(lname);
}

int main(){
	user player1;

	string fname, lname;

	AskUser(fname, lname);
	player1.SetFirstName(fname);
	player1.SetLastName(lname);
	player1.PrintName();



	return 0;
}

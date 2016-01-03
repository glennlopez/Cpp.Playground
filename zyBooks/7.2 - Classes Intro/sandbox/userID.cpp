#include <iostream>
#include <string>
using namespace std;


//** USER CLASS **//
class user{
	public:
		void SetUsrName();
		void SetFirstName();
		void SetLastName();
		void SetUsrID(); 	//make this random 5 number %10
		void PrintNames();
		int PrintID();
	private:
		string UsrName;
		string FirstName;
		string LastName;
		int UsrID;
};



//** DEFINING THE CLASS MEMBERS **//
void user::SetUsrName(){
	cout << "User Name: ";
	cin >> UsrName;
}
void user::SetFirstName(){
	cout << "First Name: ";
	cin >> FirstName;
}
void user::SetLastName(){
	cout << "Last Name: ";
	cin >> LastName;
}
void user::SetUsrID(){
	UsrID = 1234;
}

void user::PrintNames(){
	cout << endl;
	cout << "---- " << UsrName << " ----" << endl;
	cout << "First Name: " << FirstName << endl;
	cout << "Last Name: " << LastName << endl;
	cout << "User ID: " << UsrID << endl;
	cout << "-------------";
	cout << endl;
}






//** MAIN FUNCTION **//
int main() {

	user glenn;
	glenn.SetUsrName();
	glenn.SetFirstName();
	glenn.SetLastName();
	glenn.PrintNames();


	return 0;
}

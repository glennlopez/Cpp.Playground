#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
	This practice is practcie looping through a vector
*/

class Member{
	public:
		//defualts
		Member(): uname("undefined"), pass("undefined"){
			return;
		}

		//mutators
		void setUname(string username){
			uname = username;
		}
		void setPass(string password){
			pass = password;
		}
		void setItemListSize(int size){
			vector<int> itemList(size);
		}

		//accessors
		string getUname(){
			return uname;
		}
		string getPass(){
			return pass;
		}
	private:
		string uname;
		string pass;
};





int main(){

	int memberNum = 10;
	vector<Member> memberID(memberNum);

	cout << "How many members (max 10): ";
	cin >> memberNum;

	//set username
	string uname ="?";
	string password = "0123";
	for(int i = 0; i < memberNum; i++){
		cout << "Member #" << i + 1 << " Name: ";
		cin >> uname;
		memberID.at(i).setUname(uname);
		cout << "Set Password: ";
		cin >> password;
		memberID.at(i).setPass(password);
		cout << endl;
	}

	for(int i = 0; i < memberNum; i++){
		cout << memberID.at(i).getUname() << " ";
		cout << endl;
	}

	cout << endl;

	cout << memberID.at(1).getPass() << endl;


return 0;
}

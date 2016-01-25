#include <iostream>
using namespace std;

class TestThis{
private:
	string username;

public:
	TestThis(){
		username = "undef..";
	}
	void setUname(string username){
		this->username = username;
		//username = username;
	}
	string getUname(){
		return username;
	}
};

int main(){

	TestThis test;

	test.setUname("hi");
	cout << test.getUname();

	cout << endl;
	return 0;
}

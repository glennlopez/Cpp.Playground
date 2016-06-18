#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

	//typedefs
	typedef unsigned int u_int;

	u_int loop_num = 0;

	cout << "How many times to type hello: ";
	cin >> loop_num;

	if(loop_num > 10){
		cout << "sorry, cannot go over 10 lines.";
		cout << endl;
	}

	else{
		for(u_int x = 0; x < loop_num; x++){
		cout << "hello";
		cout << endl;
		}
	}


	return 0;
}

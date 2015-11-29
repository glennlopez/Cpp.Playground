#include <iostream>
using namespace std;

//prototypes
void Regular();
void Break();
void Continue();

int main(int argc, char const *argv[]) {
	//un-comment desired functions to compare

	//Regular();
	Break();
	Continue();

	return 0;
}



/**************
	FUNCTIONS
***************/

//regular loop
void Regular(){
	cout << "------ Regular Loop \n";
	for (int i = 0; i < 5; i++){
		/*
			Does a regular loop
		*/
		cout << "i = " << i << endl;
		// break or continue
		cout << "Do some more stuff with " << i << endl;
	}
	cout << "\n\n";
}

//break loop
void Break(){
	cout << "------ Break Loop \n";
	for (int i = 0; i < 5; i++){
		/*
			when i == 2 then stop the loop
		*/
		cout << "i = " << i << endl;
		// break or continue
		if (i == 2){
			break;
		}
		cout << "Do some more stuff with " << i << endl;
	}
	cout << "\n\n";

}

//continue loop
void Continue(){
	cout << "------ Continue Loop \n";
	for (int i = 0; i < 5; i++){
		/*
			when i == 2 then skip 1 iteration & continue the loop
		*/
		cout << "i = " << i << endl;
		// break or continue
		if (i == 2){
			continue;
		}
		cout << "Do some more stuff with " << i << endl;
	}
	cout << "\n\n";


}

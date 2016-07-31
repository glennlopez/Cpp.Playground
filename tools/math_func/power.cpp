#include <iostream>
using namespace std;

int pow(int num, int power);


//MAIN
int main(){

cout << pow(2,3);

}




//POW FUNC DEBUG
int pow(int num, int power){

	for(int i = 0; i < power; i++){
		cout << num << " ";
	}

	return num;
}

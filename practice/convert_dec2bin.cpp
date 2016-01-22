#include <iostream>
using namespace std;

void convert(unsigned int toConvert){

	while(toConvert != 0){
		if(toConvert % 2 == 0){
			//FIXME: use vector.push_back(0); instead
			cout << 0;
		}
		else{
			//FIXME: use vector.push_back(1); instead
			cout << 1;
		}
		toConvert = toConvert / 2;
	}
}

int main(){

	//convert decimal 12 to binary
	convert(12); //needs to be flipped

	cout << endl;
	return 0;
}

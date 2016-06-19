#include <iostream>
using namespace std;

//prototypes
void EnterBid();
void Error_TooLowBid();

//Write an expression that continues to bid until the user enters 'n'.
int user_bid = 0;
int curent_bid = 3;
char prompt = '?'; 	//(y/n)


int main(){

	Error_TooLowBid();


	return 0;
}


//enter bid
void EnterBid(){
	while(user_bid <= curent_bid){
		cout << "Enter your bid: ";
		cin >> user_bid;
	}
}

//bid too low
void Error_TooLowBid(){
	while(user_bid <= curent_bid){
		cout << "Error: highest bid is " << curent_bid << ", your bid of " << user_bid << " is too low." << endl;
		EnterBid();
	}
}

//finalize bid

//bid won

#include <iostream>
using namespace std;

//prototypes
void EnterBid();
void Error_TooLowBid();
void FinalizeBid();

//Write an expression that continues to bid until the user enters 'n'.
int user_bid = 0;
int curent_bid = 3;
char prompt = '?'; 	//(y/n)


int main(){


while(user_bid < curent_bid){
	EnterBid();
	FinalizeBid();

}


	return 0;
}



//enter bid
void EnterBid(){
	while(user_bid <= curent_bid){
		cout << "Enter your bid: ";
		cin >> user_bid;
		if (user_bid < curent_bid){
			Error_TooLowBid();
		}
		else if(user_bid > curent_bid){
			break;
		}
	}
}

//bid too low
void Error_TooLowBid(){
	while(user_bid <= curent_bid){
		cout << "Error: highest bid is " << curent_bid << ", your bid of " << user_bid << " is too low." << endl;
		EnterBid();
		if(user_bid > curent_bid){
			break;
		}
	}
}

//finalize bid
void FinalizeBid(){
	cout << "Would you like to finalize your bid at " << user_bid << " (y/n): ";
	cin >> prompt;

	if(prompt == 'y'){
		curent_bid = user_bid;
	}
	else{
		user_bid = -1;
		cout << "Bid finalized at " << curent_bid << "." << endl;
	}
}


//bid won

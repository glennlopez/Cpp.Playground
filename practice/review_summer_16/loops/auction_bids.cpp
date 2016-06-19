#include <iostream>
using namespace std;

//Write an expression that continues to bid until the user enters 'n'.
int user_bid = 0;
int curent_bid = 3;
char prompt = '?'; 	//(y/n)

//prototypes
void enterBid(void);

int main(){






	return 0;
}


//enter bid
void enterBid(void){
	while(user_bid <= curent_bid){
		cout << "Enter your bid: ";
		cin >> user_bid;

		//debug
		cout << "//user_bid: " << user_bid << endl;
	}
}

//bid too low

//finalize bid

//bid won

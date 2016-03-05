
bool isPrime(int param){
	//check if a number is prime
	unsigned long long usrNum = param;			//<- use larger datatype if result is wrong
	bool isPrime = 0;

	for(unsigned long long i = 2; i < 10; i++){

		if(usrNum > 9){
			if(usrNum % i){
				isPrime = 1;
			}

			else{
				isPrime = 0;
				break;
			}
		}

		else{
			if(usrNum == 2){
				isPrime = 1;
			}

			if(usrNum == 3){
				isPrime = 1;
			}

			if(usrNum == 5){
				isPrime = 1;
			}

			if(usrNum == 7){
				isPrime = 1;
			}
		}


	}
	return isPrime;
}

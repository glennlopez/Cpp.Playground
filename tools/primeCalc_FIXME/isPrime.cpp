
bool isPrime(int param){
	//check if a number is prime
	long usrNum = param;			//<- use larger datatype if result is wrong
	bool isPrime = 0;

	//FIXME: all prime numbers are odd numbers. (make algo more efficient)

	for(int i = 2; i < 10; i++){

		if(usrNum > 9){
			if(usrNum % i){
				isPrime = 1;
			}

			else{
				isPrime = 0;
				break;
			}
		}

		//FIXME: look for a better way to do this

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

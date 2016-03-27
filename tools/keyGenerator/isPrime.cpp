//FIXME: PRIME CALCULATOR NOT ACCURATE FOR LARGER PRIMES

/*
	This algorythm will check whether a number is prime:
		- Divide a given number from 2 to 12
		- If the number is
*/

bool isPrime(unsigned int param){

	unsigned long long usrNum = param;
	bool isPrime = 0;

	for(unsigned long long i = 2; i < 900; i++){ // <9

		if(usrNum > 11){ // >9
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

//Ranged Prime check (user-defined starting point)
bool isPrime(unsigned int param, unsigned int prec){

	unsigned long long usrNum = param;
	bool isPrime = 0;
	unsigned int start_at = prec;

	for(unsigned long long i = 2; i < start_at; i++){ // <9

		if(usrNum > 11){ // >9
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

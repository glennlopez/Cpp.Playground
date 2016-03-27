/*
	This algorythm will check whether a number is prime:
		- Divide a given number from 2 to 12
		- If the number is
*/

bool isPrime(ull param){
	//FIXME: PRIME CALCULATOR NOT ACCURATE FOR LARGER PRIMES

	ull usrNum = param;
	bool isPrime = 0;

	for(ull i = 2; i < 11; i++){ // <9

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
bool isPrime(ull param, ull prec){

	ull usrNum = param;
	bool isPrime = 0;
	ull start_at = prec;

	for(ull i = 2; i < start_at; i++){ // <9

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

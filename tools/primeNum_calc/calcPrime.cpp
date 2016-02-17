#include <iostream>

int calcPrime(double u_number){
	double pos_solution1, neg_solution1;
	int neg_solution2, pos_solution2;
	char neg_result, pos_result, isPrime;

	/* NOTE 1: To check for a floating point number we do a comparison between
	 * double and int datatypes. If they do not equal then it is a floating point
	 * since only a double can contain 0.1
	 */

	//Store user number in diffrent variables for testing
	pos_solution1 = u_number;
	neg_solution1 = u_number;
	pos_solution2 = u_number;
	neg_solution2 = u_number;

	//check for prime using 6n+1
	pos_solution1 = ((pos_solution1 + 1)/6);	//<-- solve using double
	pos_solution2 = ((pos_solution2 + 1)/6);	//<-- solve using int

	//check for prime using 6n-1
	neg_solution1 = ((neg_solution1 - 1)/6);	//<-- solve using double
	neg_solution2 = ((neg_solution2 - 1)/6);	//<-- solve using int

	//compare negative solution to test if the number is natural
	if(neg_solution1 == neg_solution2){
		neg_result = 1;	//<-- 1 means its a prime
	}
	else{
		neg_result = 0;	//<-- 0 meants its not prime
	}

	//compare postive solutions to test if the number is natural
	if(pos_solution1 == pos_solution2){
		pos_result = 1;	//<-- 1 meants its a prime
	}
	else{
		pos_result = 0;	//<-- 0 meants its not prime
	}

	//check to see if either pos or neg results are natural numbers
	if((pos_result == 1) || (neg_result == 1)){
		isPrime = 1;
	}
	else{
		isPrime = 0;
	}

	return isPrime;
}

#include <iostream>

int calcPrime(double u_number){
	double pos_solution1, neg_solution1;
	int neg_solution2, pos_solution2;
	char neg_result, pos_result, isPrime;

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


	/* NOTE 1: To check for a floating point number we do a comparison between
	 * double and int datatypes. If they do not equal then it is a floating point
	 * since only a double can contain 0.1
	 *
	 * For example: 9/2 in int = 4 however 9/2 in double = 4.5
	 * if we compare both int and double we see that it is not equal
	 * This is one way to check if a number is floating
	 */


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

	/* NOTE 2: Since both 6n-1 & 6n+1 are both valid to check if a number is
	 * prime, we will do an OR operation to check if either of them are 1
	 */
	if((pos_result == 1) || (neg_result == 1)){
		isPrime = 1;
	}
	else{
		isPrime = 0;
	}

	return isPrime;
}

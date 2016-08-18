#include <iostream>
using namespace std;

/*
	https://projecteuler.net/problem=8
	The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.

	Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?

	note: (ref) http://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
*/

int main(){

	//1000-digit number
	char digits[] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

	unsigned int i, loopLimit;
	unsigned int digitsSize, highestVal, testVal, adjacentDigits;

	//parameters
	adjacentDigits = 4;
	digitsSize = 1000;

	//fixed vars
	i = 0;
	highestVal = (digits[i + 0] - '0');
	testVal = (digits[i + 0] - '0');
	loopLimit = digitsSize - adjacentDigits;

	for(i = 0; i <= loopLimit; i++){
		for(unsigned int j = 0; j <= adjacentDigits; j++){
			
		}

		testVal =
			(digits[i + 0] - '0') *		//1
			(digits[i + 1] - '0') *		//2
			(digits[i + 2] - '0') * 	//3
			(digits[i + 3] - '0') 		//4
			/*
			(digits[i + 4] - '0') *		//5
			(digits[i + 5] - '0') * 	//6
			(digits[i + 6] - '0') * 	//7
			(digits[i + 7] - '0') * 	//8
			(digits[i + 8] - '0') * 	//9
			(digits[i + 9] - '0') * 	//10
			(digits[i + 10] - '0') * 	//11
			(digits[i + 11] - '0') * 	//12
			(digits[i + 12] - '0') 		//13
			*/
			; //end

			//debug output
			cout << "testVal: " << testVal << " | " << digits[i + 0] << " (highestVal: " << highestVal << ")" << endl;
			cout << "testVal: " << testVal << " | " << digits[i + 1] << " (highestVal: " << highestVal << ")" << endl;
			cout << "testVal: " << testVal << " | " << digits[i + 2] << " (highestVal: " << highestVal << ")" << endl;
			cout << "testVal: " << testVal << " | " << digits[i + 3] << " (highestVal: " << highestVal << ")" << endl;

			/*
			cout << "testVal: " << testVal << " | " << digits[i + 4] << " (highestVal: " << highestVal << ")" << endl;
			cout << "testVal: " << testVal << " | " << digits[i + 5] << " (highestVal: " << highestVal << ")" << endl;
			cout << "testVal: " << testVal << " | " << digits[i + 6] << " (highestVal: " << highestVal << ")" << endl;
			cout << "testVal: " << testVal << " | " << digits[i + 7] << " (highestVal: " << highestVal << ")" << endl;
			cout << "testVal: " << testVal << " | " << digits[i + 8] << " (highestVal: " << highestVal << ")" << endl;
			cout << "testVal: " << testVal << " | " << digits[i + 9] << " (highestVal: " << highestVal << ")" << endl;
			cout << "testVal: " << testVal << " | " << digits[i + 10] << " (highestVal: " << highestVal << ")" << endl;
			cout << "testVal: " << testVal << " | " << digits[i + 11] << " (highestVal: " << highestVal << ")" << endl;
			cout << "testVal: " << testVal << " | " << digits[i + 12] << " (highestVal: " << highestVal << ")" << endl;
			cout << "testVal: " << testVal << " | " << digits[i + 13] << " (highestVal: " << highestVal << ")" << endl;
			*/

			if(highestVal < testVal){
				highestVal = testVal;
			}

	}

	cout << endl;
	cout << "testVal: " << testVal << endl;
	cout << "highestVal: " << highestVal << endl;


	cout << endl;
	return 0;
}

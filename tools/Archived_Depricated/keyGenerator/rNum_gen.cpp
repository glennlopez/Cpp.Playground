//for random generator
#include <cstdlib>     // Enables use of rand()
#include <ctime>       // Enables use of time()

// rNum_gen(range,starting-at)
ull rNum_gen(unsigned int range, ull startingPoint){
	ull rNum = 0;			// store value for random number
	srand(time(0));    	// "Seeds" the random number generator

	rNum = ((rand() % range) + startingPoint);

	return rNum;
}

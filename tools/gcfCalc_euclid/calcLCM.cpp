//#include "calcGCF.cpp"		//<-- This requires GCF.cpp

int lcm(int x, int y){
	int gcf_div;
	gcf_div = gcf(x, y);

	/* The formula for finding the LCM is:
	 *		(num1 * num2)/GCF
	 *
	 * To find GCF:
	 *		Replace the larger number with the diffrance between the two
	 *		numbers until both numbers are equal.
	 *		(irl: factor tree will also work but slower)
	 */

	return ((x * y)/gcf_div);
}

	/* NOTE: You can loop this function and replace one of the two
	 * numbers with the LCM of the previious two numbers as many times
	 * as you need:
	 *
	 *		This allows you to do LCM of 3 to 100x using a for loop
	 */

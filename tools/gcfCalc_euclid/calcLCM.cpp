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

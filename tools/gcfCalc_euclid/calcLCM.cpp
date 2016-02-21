//#include "calcGCF.cpp"

int lcm(int x, int y){
	int gcf_div;
	gcf_div = gcf(x, y);

	return ((x * y)/gcf_div);
}

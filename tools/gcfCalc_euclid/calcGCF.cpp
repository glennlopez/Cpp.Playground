double gcf(double x, double y){
	double num1 = x;
	double num2 = y;
	double a, b, temp;

	a = num1;
	b = num2;

	while(num1 != num2){
		if(a < b){
			temp = a;
			a = b;
			b = temp;

			num2 = a - b;
		}
		else{
			num1 = a - b;
		}
		a = num1;
		b = num2;
	}

	return num1;
}

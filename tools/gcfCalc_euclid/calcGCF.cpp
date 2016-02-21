double gcf(double x, double y){
	typedef short gcf_type;	//change to diffrent datatype if error in calc

	gcf_type num1 = x;
	gcf_type num2 = y;
	gcf_type a, b, temp;

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

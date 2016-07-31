int pow(int num, int power){
	int multiplyer = num;

	for(int i = 1; i < power; i++){
		num = num * multiplyer;
	}

	return num;
}

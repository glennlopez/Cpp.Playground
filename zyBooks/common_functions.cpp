//*** FUNCTIONS ***//
void YesOrNo(char& errorChar){
	while (true) {
	    cout << "Yes or No [y/n]: ";
	    cin >> errorChar;

	    if ((errorChar == 'y') || (errorChar == 'n')) {
	        break;
	    }
	}
}

void printVector(const vector<int>& vecNums){
	for (int i = 0; i < vecNums.size(); i++){
		cout << vecNums.at(i) << " ";
	}
	return;
}

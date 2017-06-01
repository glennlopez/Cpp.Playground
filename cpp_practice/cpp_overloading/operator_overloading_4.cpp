/*
	Calculate the time between each runners
*/

#include <iostream>
using namespace std;

class RunnerTime{
private:
	int minutes;
	int seconds;

public:
	RunnerTime(int min = 0, int sec = 0){
		minutes = min;
		seconds = sec;
	}
	//Overload
	RunnerTime operator-(RunnerTime rhs){
		RunnerTime totalRunTime;

		totalRunTime.minutes = minutes - rhs.minutes;
		totalRunTime.seconds = seconds - rhs.seconds;

		return totalRunTime;
	}

	void Print();

};

void RunnerTime::Print(){
	cout << minutes << " min" << ", " << seconds <<  " sec.";
}


//** MAIN **//
int main(int argc, char const *argv[]) {
	RunnerTime glenn(3, 6);
	RunnerTime other(10, 14);
	RunnerTime diff;
	RunnerTime diff2;

	diff2 =  other - glenn;

	cout << "Glenn: "; glenn.Print(); cout << endl;
	cout << "Other: "; other.Print(); cout << endl;
	cout << ".. are "; diff2.Print(); cout << " apart." << endl;

	return 0;
}

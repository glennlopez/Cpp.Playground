// Practice session: operator overloading
#include <iostream>
#include <string>
using namespace std;

class PowerUpTime{
private:
	double minutes; 	//<-- notice this is double and params are int below
	double hours;		//<-- is double to take decimals after the / operator
	string name;

public:
	PowerUpTime(int hrs = 0, int min = 0, string param = "-"){ //<-- always define
		name = param;
		hours = hours + (hrs + (min/60)); 	//<-- added compensation formula
		minutes = minutes + (min % 60);			//<-- compensation is a min to hour converter

		//minutes = min;				//<-- old method for simplfication
		//hours = hrs;					//<-- old method for simplification
	}

	PowerUpTime operator+(int rhsNum){
		PowerUpTime addInt;

		addInt.hours = hours + rhsNum;
		addInt.minutes = minutes;

		return addInt;
	}

	PowerUpTime operator+(PowerUpTime rhs){
		PowerUpTime totalTime;

		totalTime.hours = hours + rhs.hours;
		totalTime.minutes = minutes + rhs.minutes;

		return totalTime;
	}

	PowerUpTime operator/(PowerUpTime rhs){
		PowerUpTime avgTime;

		avgTime.hours = (hours + rhs.hours) / 2;
		avgTime.minutes = (minutes + rhs.minutes) / 2;

		return avgTime;
	}

	void Print(){

		//this will count how many dashes to compensate so that the top and bottom dashes are always equal
		int dashes = 0;
		for(int i = 0; i < name.size(); i++){
			dashes = 22 + i;
		}

		cout << endl;
		cout << "-----------" << name << "-----------" << endl;
		cout << "Hours: " << hours << endl;
		cout << "minutes: " << minutes << endl;

		for(int i = 0; i < dashes + 1; i++){
			cout << "-";
		}

	}

	void AddTime(){
		char usrAns = '?';

		cout << "Add time for " << name << " (y/n): ";
		cin >> usrAns;

		if((usrAns == 'y') || (usrAns == 'Y')){
			int usrHrs = 0;
			int usrMin = 0;

			cout << "How many more hours: ";
			cin >> usrHrs;
			cout << "How many more minutes: ";
			cin >> usrMin;

			hours = hours + usrHrs;
			minutes = minutes + usrMin;
		}
	}

};


//****************************  MAIN  ************************************

int main(int argc, char const *argv[]) {
	//Hour:Minutes:Name
	PowerUpTime goku(1, 70, "Goku");
	PowerUpTime vegeta(2, 61, "Vegeta");
	PowerUpTime gogeta;
	PowerUpTime gohan;

	//gohan = goku + 5;
	//goku.Print();
	//gohan.Print();

	//goku.AddTime();
	//vegeta.AddTime();

	//goku.Print();
	//vegeta.Print();

	//gogeta = goku / vegeta;
	//gogeta.Print();

	cout << endl;
	return 0;
}

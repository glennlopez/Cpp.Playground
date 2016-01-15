// Practice session: operator overloading
#include <iostream>
#include <string>
using namespace std;

class PowerUpTime{
private:
	double minutes;
	double hours;
	string name;

public:
	PowerUpTime(int hrs = 0, int min = 0, string param = "-"){ //<-- always define
		name = param;
		hours = hrs + (min/60); 	//<-- added compensation formula
		minutes = min % 60;		//<-- compensation is a min to hour converter

		//minutes = min;		//<-- old method for simplfication
		//hours = hrs;		//<-- old method for simplification
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

};


//****************************  MAIN  ************************************

int main(int argc, char const *argv[]) {
	//Hour:Minutes:Name
	PowerUpTime goku(1, 70, "Goku");
	PowerUpTime vegeta(2, 61, "Vegeta");
	PowerUpTime gogeta;

	goku.Print();
	vegeta.Print();

	//notice how adding the string "Goku" + "Vegeta" results in the default being displayed
	gogeta = goku / vegeta;
	gogeta.Print();

	cout << endl;
	return 0;
}

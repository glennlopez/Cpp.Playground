#include <iostream>
using namespace std;

class PowerUpTime{
private:
	int hours;
	int minutes;

public:
	PowerUpTime(int usrHours, int usrMinutes);
	PowerUpTime operator+(PowerUpTime rhs);
	void Print();
};

//this needs to have a variable set before you can use operators
PowerUpTime::PowerUpTime(int usrHours = 0, int usrMinutes = 0){
	hours = usrHours;
	minutes = usrMinutes;
}

PowerUpTime PowerUpTime::operator+(PowerUpTime rhs){
	PowerUpTime totalPowerUpTime;

	//hours = hours + hours
	//total hours = hours + right hand hours

	totalPowerUpTime.hours = hours + rhs.hours;
	totalPowerUpTime.minutes = minutes + rhs.minutes;

	return totalPowerUpTime;
}

void PowerUpTime::Print(){
	cout << "Power up time: " << hours << " hours and " << minutes << ".";
	cout << endl;
}

int main(int argc, char const *argv[]) {

	PowerUpTime goku(1, 45);
	PowerUpTime vegeta(3, 20);
	PowerUpTime SSJCombined;
	SSJCombined = goku + vegeta;

	cout << "Vegita" << endl;
	vegeta.Print();

	cout << endl;

	cout << "Goku" << endl;
	goku.Print();

	cout << endl;

	cout << "Combined SSJ" << endl;
	SSJCombined.Print();


	return 0;
}

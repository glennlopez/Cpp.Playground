#include <iostream>
using namespace std;

class Chronos{
private:
	//private variables
	int timeMin;
	int timeHour;
	//int totTime;

public:
	Chronos(){
		timeMin = 0;
		timeHour = 0;
	//	totTime = 0;
	}

	//Minutes
	int addTimeMin(int min){
		timeMin = timeMin + (min % 60);
		//timeMin = min % 60;
		timeHour = timeHour + (min / 60);
		return timeMin;
	}
	int getTimeMin(){
		return timeMin;
	}

	//Hours
	int addTimeHour(int hour){
		timeHour = timeHour + hour;
		return timeHour;
	}
	int getTimeHour(){
		return timeHour;
	}

};


int main(){

	Chronos goku, vegita;

	goku.addTimeHour(1);
	goku.addTimeHour(2);
	goku.addTimeMin(30);
	goku.addTimeMin(2);

	vegita.addTimeMin(11);
	vegita.addTimeHour(1);
	vegita.addTimeMin(10);

	int timeTot = 0;
	//timeTot = goku + vegita; // <-- DOESNT WORK


	cout << "Hour: " << goku.getTimeHour() << endl;
	cout << "Min: " << goku.getTimeMin() << endl;

	cout << endl;

	cout << "Hour: " << vegita.getTimeHour() << endl;
	cout << "Min: " << vegita.getTimeMin() << endl;

	return 0;
}

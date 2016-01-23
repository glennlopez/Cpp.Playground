#include <iostream>
using namespace std;

/*
	Adding 2 vectors
	TimeHrMn goku(2, 3);
	TimeHrMn vegita(1, 2);
	TimeHrMn TimeTot;

	TimeTot should be --> 3, 5

	TimeHr goku, vegita;
	TimeTot = goku + vegita;
*/

class TimeHrMn{
private:
	int hour;
	int min;

public:
	//TimeHrMn(hour, min) //<-- format
	TimeHrMn(int timehour = 0, int timemin = 0); //<-- needs assingned number
	TimeHrMn operator+(TimeHrMn rhs) ;
	void Print();

};

TimeHrMn::TimeHrMn(int timehour, int timemin){
	min = timemin;
	hour = timehour;
}

TimeHrMn TimeHrMn::operator+(TimeHrMn rhs){
	TimeHrMn timeTotal;

	timeTotal.min = min + rhs.min;
	timeTotal.hour = hour + rhs.hour;

	return timeTotal;
}

void TimeHrMn::Print(){
	cout << "Hour: " << hour << endl;
	cout << "Min: " << min << endl;
}



int main(){
	TimeHrMn goku(2, 5);
	TimeHrMn vegita(5, 2);
	TimeHrMn totalT;
	totalT = goku + vegita;

	totalT.Print();


	return 0;
}

#include <iostream>
#include <string>
using namespace std;

/*-------------------------
10F to celcius:
	Convert temp1.celcius(10, 'f');
	temp:unit

200K to celcius:
	Convert temp2.celcius(200, 'k');
	temp:unit
---------------------------*/

class Convert{
private:
	double temp;
	char unit;
	double result;

public:
	Convert(){
		temp = -1;
		unit = '?';
		result = -1;
	}

	double celcius(double setTemp, char setUnit){
		temp = setTemp;
		unit = setUnit;

		if(unit == 'f'){ 	//<-- Fahrenheit to Celcius
			result = (temp - 32) * 5/9;
		}

		if(unit == 'k'){	//<-- Kelvin to Celcius
			result = (setTemp - 273.15);
		}

		return result;
	}

};

#include <iostream>
#include <string>
using namespace std;
//This is a simple Conversions class.

/*------- HOW TO IMPLIMENT ---------
10F to celcius:
	Convert temp1.celcius(10, 'f');
	temp:unit

200K to celcius:
	Convert temp2.celcius(200, 'k');
	temp:unit

By: github.com/glennlopez
-----------------------------------*/

class Convert{
private:
	double temp;
	char unit;
	double result;

public:
	Convert();
	void getTemp();

	//Temp Conversions
	double celcius(double setTemp, char setUnit);
	double fahrenheit(double setTemp, char setUnit);
	double kelvin(double setTemp, char setUnit);

};



//** CLASS OBJECT DEFINITIONS **//
Convert::Convert(){
	temp = -1;
	unit = '?';
	result = -9999.99;
}

void Convert::getTemp(){
	cout << temp << endl;
}

//** 	Temp Conversions **//
double Convert::celcius(double setTemp, char setUnit){
	temp = setTemp;
	unit = setUnit;

	if(unit == 'f'){ 	//<-- Fahrenheit to Celcius
		result = (setTemp - 32) * 5/9;
	}

	if(unit == 'k'){	//<-- Kelvin to Celcius
		result = (setTemp - 273.15);
	}
	return result;
}

double Convert::fahrenheit(double setTemp, char setUnit){
	temp = setTemp;
	unit = setUnit;

	if(unit == 'c'){ 	//<-- Celcius to Fahrenheit
		//20°C × 9/5 + 32 = 68 °F
		result = (setTemp * 9) / 5 + 32;
	}

	if(unit == 'k'){	//<-- Kelvin to to Fahrenheit
		result = (setTemp * 9) / 5 - 459.67;
	}
	return result;
}

double Convert::kelvin(double setTemp, char setUnit){
	temp = setTemp;
	unit = setUnit;

	if(unit == 'c'){ 	//<-- Celcius to Kelvin
		//K = C  + 273.15
		result = setTemp +  273.15;
	}

	if(unit == 'f'){	//<-- Fahrenheit to Celcius
		//K = ( F + 459.67) / 1.8
		result = (setTemp + 459.67) / 1.8;
	}
	return result;
}




//** FUNCTION **//
void celcius(double setTemp, char setUnit){
	Convert param;
	cout << param.celcius(setTemp, setUnit) << "°C"; //<< endl;
}

void fahrenheit(double setTemp, char setUnit){
	Convert param;
	cout << param.fahrenheit(setTemp, setUnit) << "°F"; //<< endl;
}

void kelvin(double setTemp, char setUnit){
	Convert param;
	cout << param.kelvin(setTemp, setUnit) << "°K"; //<< endl;
}

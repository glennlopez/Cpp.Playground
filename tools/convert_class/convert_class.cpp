#include <iostream>
#include <string>
using namespace std;
/*------- HOW TO IMPLIMENT ---------



++++++++++++++++++++++++++++++++++++
10F to celcius (raw):
	Convert temp1.celcius(10, 'f');
	temp:unit

Alternatively (printout):
	celcius(10,'f'); will convert
	10 Fahrenheit to celcius.
++++++++++++++++++++++++++++++++++++

++++++++++++++++++++++++++++++++++++
Base 10 to Binary (raw):
	Convert item.base(10, 2, 1987);
	base1:base2:variables

Alternatively (printout):
	base(10, 2, 1987); will convert
	1987 to 11111000011

By: github.com/glennlopez
++++++++++++++++++++++++++++++++++++



-----------------------------------*/
class Convert{
private:
	double num;
	char unit;
	double result;

public:
	Convert();
	void getTemp();

	//Temp Conversions
	double celcius(double setNum, char setUnit);
	double fahrenheit(double setNum, char setUnit);
	double kelvin(double setNum, char setUnit);

	//Distance Conversions
	double meters(double setNum, char setUnit);

};



//** CLASS OBJECT DEFINITIONS **//
Convert::Convert(){
	//defaults - error markers
	num = -1;
	unit = '?';
	result = -9999.99;
}

void Convert::getTemp(){
	cout << num << endl;
}

//** 	Temp Conversions **//
double Convert::celcius(double setNum, char setUnit){
	num = setNum;
	unit = setUnit;

	if(unit == 'f'){ 	//<-- Fahrenheit to Celcius
		result = (setNum - 32) * 5/9;
	}

	if(unit == 'k'){	//<-- Kelvin to Celcius
		result = (setNum - 273.15);
	}
	return result;
}

double Convert::fahrenheit(double setNum, char setUnit){
	num = setNum;
	unit = setUnit;

	if(unit == 'c'){ 	//<-- Celcius to Fahrenheit
		//20°C × 9/5 + 32 = 68 °F
		result = (setNum * 9) / 5 + 32;
	}

	if(unit == 'k'){	//<-- Kelvin to to Fahrenheit
		result = (setNum * 9) / 5 - 459.67;
	}
	return result;
}

double Convert::kelvin(double setNum, char setUnit){
	num = setNum;
	unit = setUnit;

	if(unit == 'c'){ 	//<-- Celcius to Kelvin
		//K = C  + 273.15
		result = setNum +  273.15;
	}

	if(unit == 'f'){	//<-- Fahrenheit to Celcius
		//K = ( F + 459.67) / 1.8
		result = (setNum + 459.67) / 1.8;
	}
	return result;
}




//** PRINT FUNCTIONS **//
void celcius(double setNum, char setUnit){
	Convert param;
	cout << param.celcius(setNum, setUnit) << "°C"; //<< endl;
}

void fahrenheit(double setNum, char setUnit){
	Convert param;
	cout << param.fahrenheit(setNum, setUnit) << "°F"; //<< endl;
}

void kelvin(double setNum, char setUnit){
	Convert param;
	cout << param.kelvin(setNum, setUnit) << "°K"; //<< endl;
}

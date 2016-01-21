#include <iostream>
#include <string>
using namespace std;
/*------- HOW TO IMPLIMENT ---------

10F to celcius (raw):
	ConvertTemp temp1.celcius(10, 'f');
	temp:unit

Alternatively (printout):
	celcius(10,'f'); will convert
	10 Fahrenheit to celcius.

By: github.com/glennlopez

-----------------------------------*/
class ConvertTemp{
private:
	double num;
	char unit;
	double result;

public:
	ConvertTemp();
	void getTemp();

	//Temp Conversions
	double celcius(double setNum, char setUnit);
	double fahrenheit(double setNum, char setUnit);
	double kelvin(double setNum, char setUnit);

	//Distance Conversions
	double meters(double setNum, char setUnit);

};



//** CLASS OBJECT DEFINITIONS **//
ConvertTemp::ConvertTemp(){
	//defaults - error markers
	num = -1;
	unit = '?';
	result = -9999.99;
}

void ConvertTemp::getTemp(){
	cout << num << endl;
}

//** 	Temp Conversions **//
double ConvertTemp::celcius(double setNum, char setUnit){
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

double ConvertTemp::fahrenheit(double setNum, char setUnit){
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

double ConvertTemp::kelvin(double setNum, char setUnit){
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
	ConvertTemp param;
	cout << param.celcius(setNum, setUnit) << "°C"; //<< endl;
}

void fahrenheit(double setNum, char setUnit){
	ConvertTemp param;
	cout << param.fahrenheit(setNum, setUnit) << "°F"; //<< endl;
}

void kelvin(double setNum, char setUnit){
	ConvertTemp param;
	cout << param.kelvin(setNum, setUnit) << "°K"; //<< endl;
}

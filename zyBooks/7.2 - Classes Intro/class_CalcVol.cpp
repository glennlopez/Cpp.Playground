#include <iostream>
using namespace std;

class CalcVol {
	public:
		void SetWidth(double setW);
		void SetHeight(double setH);
		void SetLength(double setL);
		double GetVol() const;
	private:
		double width;
		double height;
		double length;
};

void CalcVol::SetWidth(double setW){
	 width = setW;
}

void CalcVol::SetHeight(double setH){
	 height = setH;
}

void CalcVol::SetLength(double setL){
	 length = setL;
}

double CalcVol::GetVol() const{
	return width * height * length;
}

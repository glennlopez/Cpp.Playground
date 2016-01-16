#include <iostream>
using namespace std;

class CalcArea {
	public:
		void SetWidth(double setW);
		void SetHeight(double setH);
		double GetArea() const;
	private:
		double width;
		double height;
};

//store width
void CalcArea::SetWidth(double setW){
	width = setW;
}

//store height
void CalcArea::SetHeight(double setH){
	height = setH;
}

//calcute the area
double CalcArea::GetArea() const{
	return width * height;
}

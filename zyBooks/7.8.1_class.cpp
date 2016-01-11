#include <iostream>
using namespace std;

// Note: This class intentionally has errors

class StatsInfo {
public:
   void SetNum1(int numVal);
   void SetNum2(int numVal);
   int  GetNum1() const;
   int  GetNum2() const;
   int  GetAverage() const;
   void PrintNums()  const;

private:
   int num1;
   int num2;
};

void StatsInfo::SetNum1(int numVal) {
   num1 = numVal;
}

void StatsInfo::SetNum2(int numVal) {
   num2 = numVal;
}

int StatsInfo::GetNum1() const {
   return num1;
}

int StatsInfo::GetNum2() const {
   return num1;
}

int StatsInfo::GetAverage() const {
   return num1 + num2 / 2;
}

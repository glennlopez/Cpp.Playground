#include <iostream>
using namespace std;

/*
	When an operator like + has been overloaded, the compiler determines which + operation to invoke based on the operand types. In 4 + 9, the compiler sees two integer operands and thus applies the built-in + operation. In time1 + time2, where time1 and time2 are TimeHrMn objects, the compiler sees two TimeHrMn operands and thus invokes the programmer-defined function.

		A programmer can define several functions that overload the same operator, as long as each involves different types so that the compiler can determine which to invoke.
*/

class TimeHrMn {
public:
   TimeHrMn(int timeHours = 0, int timeMinutes = 0);
   void Print() const;
   TimeHrMn operator+(TimeHrMn rhs);
   TimeHrMn operator+(int rhsHours);
private:
   int hours;
   int minutes;
};

// Operands: TimeHrMn, TimeHrMn. Call this "A"
TimeHrMn TimeHrMn::operator+(TimeHrMn rhs) {
   TimeHrMn timeTotal;

   timeTotal.hours   = hours   + rhs.hours;
   timeTotal.minutes = minutes + rhs.minutes;

   return timeTotal;
}

// Operands: TimeHrMn, int. Call this "B"
TimeHrMn TimeHrMn::operator+(int rhsHours) {
   TimeHrMn timeTotal;

   timeTotal.hours = hours + rhsHours;
   timeTotal.minutes = minutes; // Stays same

   return timeTotal;
}

TimeHrMn::TimeHrMn(int timeHours, int timeMinutes) {
   hours  = timeHours;
   minutes = timeMinutes;

   return;
}

void TimeHrMn::Print() const {
   cout << "H:" << hours << ", " << "M:" << minutes << endl;

   return;
}

int main() {
   TimeHrMn time1(3, 22);
   TimeHrMn time2(2, 50);
   TimeHrMn timeTot;
   int num = 91;

   timeTot = time1 + time2; // Invokes "A"
   timeTot.Print();

   timeTot = time1 + 10;    // Invokes "B"
   timeTot.Print();

   cout << num + 8 << endl; // Invokes built-in add

   // timeTot = 10 + time1; // ERROR: No (int, TimeHrMn)

   return 0;
}

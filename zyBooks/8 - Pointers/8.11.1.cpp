#include <iostream>
using namespace std;

class CarCounter {
   public:
      CarCounter();
      CarCounter& operator=(const CarCounter& objToCopy);
      void SetCarCount(const int setVal) {
         carCount = setVal;
      }
      int GetCarCount() const {
         return carCount;
      }
   private:
      int carCount;
};

CarCounter::CarCounter() {
   carCount = 0;
   return;
}

/*
	Write a copy assignment operator for CarCounter that assigns objToCopy.carCount to the new objects's carCount, then returns *this. Sample output for the given program:

		Cars counted: 12

*/

// FIXME write copy assignment operator

/* Your solution goes here  */

int main() {
   CarCounter frontParkingLot;
   CarCounter backParkingLot;

   frontParkingLot.SetCarCount(12);
   backParkingLot = frontParkingLot;

   cout << "Cars counted: " << backParkingLot.GetCarCount();

   return 0;
}

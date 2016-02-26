#include <iostream>
using namespace std;

class CarCounter {
   public:
      CarCounter();
      CarCounter(const CarCounter& origCarCounter);
      void SetCarCount(const int count) {
          carCount = count;
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

// FIXME add copy constructor

/*
	Write a copy constructor for CarCounter that assigns origCarCounter.carCount to the constructed object's carCount. Sample output for the given program:
		Cars counted: 5
*/


/* Your solution goes here  */
CarCounter::CarCounter(const CarCounter &p){
	carCount = p.carCount;
}


void CountPrinter(CarCounter carCntr) {
   cout << "Cars counted: " << carCntr.GetCarCount();
   return;
}

int main() {
   CarCounter parkingLot;
   parkingLot.SetCarCount(5);
   CountPrinter(parkingLot);

   return 0;
}

#include <iostream>
#include <vector>
using namespace std;

class SampleClass {
   public:
      SampleClass();
      void Print() const;

   private:
      vector<int> itemList;
};

SampleClass::SampleClass() : itemList(2) {
   // itemList gets constructed with size 2
   return;
}

void SampleClass::Print() const {
   cout << "Item1: " << itemList.at(0) << endl;
   cout << "Item2: " << itemList.at(1) << endl;

   return;
}

int main() {
   SampleClass myClass;

   myClass.Print();

   return 0;
}

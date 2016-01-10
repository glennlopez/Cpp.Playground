#include <iostream>
#include <vector>
using namespace std;

/*
	The approach is not particularly useful for data members of basic types. However, the approach is important when a data member is a class type that must be explicitly constructed. Otherwise, that data member is default constructed. For example, if you have studied vectors, consider a data member consisting of a vector of size 2.
*/

class SampleClass {
   public:
      SampleClass();
      void Print() const;

   private:
      vector<int> itemList;
};

SampleClass::SampleClass() : itemList(5) {
   // itemList gets constructed with size 2
   return;
}

void SampleClass::Print() const {
   cout << "Item1: " << itemList.at(0) << endl;
   cout << "Item2: " << itemList.at(1) << endl;
	cout << "Item5: " << itemList.at(4) << endl;

   return;
}

int main() {
   SampleClass myClass;


   myClass.Print();

   return 0;
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
Write the PrintItem() function for the base class. Sample output for below program:
  Last name: Smith
  First and last name: Bill Jones
*/

class BaseItem {
public:
   void SetLastName(string providedName) {
      lastName = providedName;
   }

   // FIXME: Define PrintItem() member function

   /* Your solution goes here  */
  virtual void PrintItem() {
      cout << "Last name: " << lastName << endl;  
   }

protected:
   string lastName;
};

class DerivedItem : public BaseItem {
public:
   void SetFirstName(string providedName) {
      firstName = providedName;
   }

   void PrintItem() {
      cout << "First and last name: ";
      cout << firstName << " " << lastName << endl;
   };

private:
   string firstName;
};

int main() {
   BaseItem*    baseItemPtr    = 0;
   DerivedItem* derivedItemPtr = 0;
   vector<BaseItem*> itemList;
   int i = 0;

   baseItemPtr = new BaseItem();
   baseItemPtr->SetLastName("Smith");

   derivedItemPtr = new DerivedItem();
   derivedItemPtr->SetLastName("Jones");
   derivedItemPtr->SetFirstName("Bill");

   itemList.push_back(baseItemPtr);
   itemList.push_back(derivedItemPtr);

   for (i = 0; i < itemList.size(); ++i) {
      itemList.at(i)->PrintItem();
   }

   return 0;
}

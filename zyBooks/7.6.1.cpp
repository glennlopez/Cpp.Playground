#include <iostream>
using namespace std;

/*
	Write a second constructor as indicated. Sample output:
		User1: Minutes: 0, Messages: 0
		User2: Minutes: 1000, Messages: 5000
*/

class PhonePlan{
   public:
      PhonePlan();
      PhonePlan(int numMinutes, int numMessages);
      void   Print() const;
   private:
      int    freeMinutes;
      int    freeMessages;
};

PhonePlan::PhonePlan() {     // Default constructor
   freeMinutes  = 0;
   freeMessages = 0;
   return;
}

// FIXME: Create a second constructor with numMinutes and numMessages parameters.

/* Your solution goes here  */
PhonePlan::PhonePlan(int numMinutes, int numMessages){
	freeMinutes = numMinutes;
	freeMessages = numMessages;

}

void PhonePlan::Print() const {
   cout << "Minutes: " << freeMinutes << ", Messages: " << freeMessages << endl;
   return;
}

int main() {
   PhonePlan user1Plan;                // Calls default constructor
   PhonePlan user2Plan(1000, 5000);    // Calls newly-created constructor

   cout << "User1: ";
   user1Plan.Print();

   cout << "User2: ";
   user2Plan.Print();

   return 0;
}

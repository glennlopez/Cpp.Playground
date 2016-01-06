
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*** Seat class definition ***/
class Seat {
public:
   void Reserve(string resfirstName, string resLastName, int resAmountPaid);
   void MakeEmpty();
   bool IsEmpty() const;
   void Print() const;

private:
   string firstName;
   string lastName;
   int    amountPaid;
};






void Seat::Reserve(string resfirstName, string resLastName, int resAmountPaid) {
   firstName  = resfirstName;
   lastName   = resLastName;
   amountPaid = resAmountPaid;

   return;
}

void Seat::MakeEmpty() {
   firstName  = "empty";
   lastName   = "empty";
   amountPaid = 0;

   return;
}

bool Seat::IsEmpty() const {
   return(firstName == "empty");
}

void Seat::Print() const {
   cout << firstName << " " << lastName  << ", ";
   cout << "Paid: "  << amountPaid << endl;

   return;
}
/*** End definitions for Seat class ***/






/*** Functions for vector of Seat objects ***/
void SeatsMakeEmpty(vector<Seat>& seats) {
   unsigned int i = 0;

   for (i = 0; i < seats.size(); ++i) {
      seats.at(i).MakeEmpty();
   }

   return;
}

void SeatsPrint(vector<Seat> seats) {
   unsigned int i = 0;

   for (i = 0; i < seats.size(); ++i) {
      cout << i << ": ";
      seats.at(i).Print();
   }

   return;
}

void SeatsCreateReservation(vector<Seat>& seats) {
   string firstName, lastName;
   int amountPaid = 0;
   unsigned int seatNum = 0;
   Seat seat;

   cout << "Enter seat number (0..";
   cout << seats.size() - 1 << "): ";
   cin  >> seatNum;

   if (seatNum > (seats.size() - 1)) {
      cout << "Seat number too large." << endl;
   }
   else if ( !(seats.at(seatNum).IsEmpty()) ) {
      cout << "Seat already occupied." << endl;
   }
   else {
      cout << "Enter first name: ";
      cin >> firstName;
      cout << "Enter last name: ";
      cin >> lastName;
      cout << "Enter amount paid: ";
      cin >> amountPaid;

      seat.Reserve(firstName, lastName, amountPaid);
      seats.at(seatNum) = seat;

      cout << "Completed." << endl;
   }

   return;
}
/*** End functions for vector of Seat objs ***/







int main() {
   char   userKey = '-';
   vector<Seat> seats(5);

   SeatsMakeEmpty(seats);

   while (userKey != 'q') {
      cout << endl << "Enter command (p/r/q): ";
      cin >> userKey;

      if (userKey == 'p') { // Print seats
         SeatsPrint(seats);
      }
      else if (userKey == 'r') { // Reserve seat
         SeatsCreateReservation(seats);
      }
      else if (userKey == 'q') { // Quit
         cout << "Quitting." << endl;
      }
      else {
         cout << "Invalid command." << endl;
      }
   }

   return 0;
}

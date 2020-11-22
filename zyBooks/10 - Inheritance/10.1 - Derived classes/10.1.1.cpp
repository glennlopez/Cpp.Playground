#include <iostream>
#include <string>
using namespace std;

/*
Assign courseStudent's name with Smith, age with 20, and ID with 9999. Use the print member function and a separate cout statement to output courseStudents's data. End with a newline. Sample output from the given program:
  Name: Smith, Age: 20, ID: 9999
*/

class PersonData {
public:
   void SetName(string userName) {
      lastName  = userName;
   };
   void SetAge(int numYears) {
      ageYears = numYears;
   };
   // Other parts omitted

   void PrintAll() {
      cout << "Name: " << lastName;
      cout << ", Age: "  << ageYears;
   };

private:
   int    ageYears;
   string lastName;
};

class StudentData: public PersonData {
public:
   void SetID(int studentId) {
      idNum = studentId;
   };
   int GetID() {
      return idNum;
   };

private:
   int idNum;
};

int main() {
   StudentData courseStudent;

   /* Your solution goes here  */
  courseStudent.SetName("Smith");
  courseStudent.SetAge(20);
  courseStudent.SetID(9999);
  courseStudent.PrintAll();
  cout << ", ID: " << courseStudent.GetID() << endl;

   return 0;
}

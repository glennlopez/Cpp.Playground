#include <iostream>
#include "EmployeePerson.h"
#include "EmployeeManager.h"
#include "EmployeeStaff.h"
using namespace std;

int main() {
   // Create the objects
   EmployeeManager manager(25);
   EmployeeStaff staff1("Michele");

   // Load data into the objects using the Person class function
   manager.SetData("Michele", "Sales", "03-03-1975", 70000);
   staff1.SetData ("Bob",     "Sales", "02-02-1980", 50000);

   // Display the objects
   manager.PrintInfo();
   staff1.PrintInfo();

   return 0;
}

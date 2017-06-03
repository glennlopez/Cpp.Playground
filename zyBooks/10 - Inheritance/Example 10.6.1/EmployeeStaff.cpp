#include <iostream>
#include <string>
#include "EmployeeStaff.h"
using namespace std;

// Default constructor
EmployeeStaff::EmployeeStaff() {
   managerName = "";
}

// ***********************************************************************

// Constructor with parameters
EmployeeStaff::EmployeeStaff(string reportsTo) {
   managerName = reportsTo;
}

// ***********************************************************************

// Get the name of the manager
string EmployeeStaff::GetManagerName() {
   return managerName;
}

// ***********************************************************************

// FIXME: Override the EmployeePerson class' printInfo function with a
// FIXME: printInfo function to print all staff data members.
void EmployeeStaff::PrintInfo() {
}

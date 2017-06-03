#include <iostream>
#include "EmployeeManager.h"
using namespace std;

// Default constructor
EmployeeManager::EmployeeManager() {
   numManaged = 0;
}

// ***********************************************************************

// Constructor with parameters
EmployeeManager::EmployeeManager(int nManaged) {
   numManaged = nManaged;
}

// ***********************************************************************

// Get the number of people managed
int EmployeeManager::GetNumManaged() {
   return numManaged;
}

// ***********************************************************************

// FIXME: Override the EmployeePerson class' printInfo function with a
// FIXME: printInfo function to print all manager data members.

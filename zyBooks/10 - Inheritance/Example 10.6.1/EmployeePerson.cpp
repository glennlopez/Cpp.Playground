#include <iostream>
#include <string>
#include "EmployeePerson.h"
using namespace std;

// Default constructor. Set protected member variables to the empty string or 0
EmployeePerson::EmployeePerson() {
   fullName       = "";
   departmentCode = "";
   birthday       = "";
   annualSalary   = 0;

   return;
}

// ***********************************************************************

// Constructor with parameters to set the private member variables
EmployeePerson::EmployeePerson(string empFullName, string empDepartmentCode,
                               string empBirthday, int empAnnualSalary) {
   SetData(empFullName, empDepartmentCode, empBirthday, empAnnualSalary);

   return;
}

// ***********************************************************************

void EmployeePerson::SetData(string empFullName, string empDepartmentCode,
                             string empBirthday, int empAnnualSalary) {
   fullName       = empFullName;
   departmentCode = empDepartmentCode;
   birthday       = empBirthday;
   annualSalary   = empAnnualSalary;

   return;
}

// ***********************************************************************

void EmployeePerson::PrintInfo() {
   cout << "Name: " << fullName << ", Department: " << departmentCode
        << ", Birthday: " << birthday << ", Salary: " << annualSalary;
   return;
}

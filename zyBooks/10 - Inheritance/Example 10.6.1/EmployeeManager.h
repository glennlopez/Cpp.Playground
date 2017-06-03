#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include <iostream>
#include <string>
#include "EmployeePerson.h"
using namespace std;

class EmployeeManager : public EmployeePerson {
   public:
      EmployeeManager();
      EmployeeManager(int nManaged);
      int GetNumManaged();
   private:
      int numManaged;
};

#endif

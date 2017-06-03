#ifndef EMPLOYEESTAFF_H
#define EMPLOYEESTAFF_H

#include <string>
#include "EmployeePerson.h"
using namespace std;

class EmployeeStaff : public EmployeePerson {
   public:
      EmployeeStaff();
      EmployeeStaff(string reportsTo);
      string GetManagerName();
      void PrintInfo();
   private:
      string managerName;
};

#endif

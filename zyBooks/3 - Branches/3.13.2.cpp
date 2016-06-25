#include <iostream>
using namespace std;


/*
Income tax is calculated based on annual income. The tax rate is determined with a tiered approach: Income above a particular tier level is taxed at that level's rate.

	1. Run the program with an annual income of 120000. Note the tax rate and tax to pay.

	2. Modify the program to add a new tier: Annual income above 50000 but less than or equal to 100000 is taxed at the rate of 30%, and annual income above 100000 is taxed at 40%.

	3. Run the program again with an annual income of 120000. What is the tax rate and tax to pay now?

	4. Run the program again with an annual income of 60000. (Change the input area below the program.)

	5. Challenge: What happens if a negative annual salary is entered? Modify the program to print an error message in that case.

*/

int main() {
   int annualSalary = 0;
   double taxRate = 0.0;
   int taxToPay = 0;

   cout << "Enter annual salary: " << endl;
   cin >> annualSalary;

   // Determine the tax rate from the annual salary
   // FIXME: Write code to address the challenge question above
   if (annualSalary <= 20000) {
      taxRate = 0.10;
   }
   else if (annualSalary <= 50000) {
      taxRate = 0.20;
   }
   // FIXME: Add tier

	//2. Modify the program to add a new tier: Annual income above 50000 but less than or equal to 100000 is taxed at the rate of 30%
	else if(annualSalary <= 100000){
		taxRate = 0.30;
	}

	// and annual income above 100000 is taxed at 40%.

   else {
      taxRate = 0.40;
   }

   taxToPay = static_cast<int>(annualSalary * taxRate);   // Truncate tax to an integer amount
   cout << "Annual Salary: " << annualSalary << endl;
   cout << "Tax rate: " << taxRate << endl;
   cout << "Tax to pay: " << taxToPay << endl;

   return 0;
}

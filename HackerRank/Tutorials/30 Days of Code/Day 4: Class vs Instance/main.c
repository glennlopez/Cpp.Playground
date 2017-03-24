using namespace std;
#include <iostream>

/*** SOLUTION ***/
class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
      /*
       The constructor must assign initialAge to age after confirming the argument passed as initialAge is not negative; if a negative argument is passed as initialAge, the constructor should set age to 0 and print "Age is not valid, setting age to 0."".
      */

        if(initialAge < 0){
            age = 0;
            cout << "Age is not valid, setting age to 0." << endl;
        }
        else{
          age = initialAge;
        }
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console
        if(age < 13){
          cout << "You are young." << endl;

        }
        else if( (age >= 13) && (age < 18) ){
          cout << "You are a teenager." << endl;
        }
        else{
          cout << "You are old." << endl;
        }
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;

    }
/*** END OF SOLUTION **/






//debug main loop
int main(){
  Person personObject(16);
  cout << "Age: " << personObject.age << endl;
  personObject.amIOld();

  cout << endl;
  return 0;
}








/*
int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses();
        }
        p.amIOld();

		cout << '\n';
    }

    return 0;
}
*/

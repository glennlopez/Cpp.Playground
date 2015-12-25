#include <iostream>
using namespace std;

class RunnerInfo {
   public:                                // The class' public functions
      void   SetTime(int timeRunSecs);       // Time run in seconds
      void   SetDist(double distRunMiles);   // Distance run in miles
      double GetSpeedMph() const;            // Speed in miles/hour
   private:  // The class' private internal data members
      int    timeRun;
      double distRun;
};

// "RunnerInfo::" means SetTime is a RunnerInfo member function
void RunnerInfo::SetTime(int timeRunSecs) {
   timeRun = timeRunSecs;  // timeRun refers to data member
   return;
}

void RunnerInfo::SetDist(double distRunMiles) {
   distRun = distRunMiles;
   return;
}

double RunnerInfo::GetSpeedMph() const {
   return distRun / (timeRun / 3600.0); // miles / (secs / (hrs / 3600 secs))
}

int main() {
   RunnerInfo runner1; // User-created object of class type RunnerInfo
   RunnerInfo runner2; // A second object

   runner1.SetTime(360);
   runner1.SetDist(1.2);

   runner2.SetTime(200);
   runner2.SetDist(0.5);

   cout << "Runner1's speed in MPH: " << runner1.GetSpeedMph() << endl;
   cout << "Runner2's speed in MPH: " << runner2.GetSpeedMph() << endl;

   return 0;
}

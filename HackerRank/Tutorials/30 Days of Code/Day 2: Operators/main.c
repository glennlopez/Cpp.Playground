#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

//https://www.hackerrank.com/challenges/30-operators


int main() {

    double mealCost;        cin >> mealCost;
    double tipPercent;      cin >> tipPercent;
    double taxPercent;      cin >> taxPercent;
    int total = 0.5 + mealCost + (mealCost * (tipPercent/100)) + (mealCost * (taxPercent/100));

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cout << fixed << setprecision(1) << "The total meal cost is " << total << " dollars." << endl;
    return 0;
}

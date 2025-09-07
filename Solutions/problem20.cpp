// problem 20
// problem type : Basic
// question : Calculate compound interest

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main() {
  // CI = P(1 + r/100)^t – P
  double p, r, t;
  cout << "Enter principle ammount: ";
  cin >> p;
  cout << "Enter interest rate (in %): ";
  cin >> r;
  cout << "Enter time (in years): ";
  cin >> t;
  double amount = p * pow((1 + r / 100), t); // Final amount after interest
  double ci = amount - p;                    // Compound Interest

  cout << "Compound Interest is: " << ci << endl;
  cout << "Total Amount after " << t << " years: " << amount << endl;
  return 0;
}
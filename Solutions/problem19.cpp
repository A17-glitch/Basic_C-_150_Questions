// problem 19
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main() {
  // SI = (P × R × T)/100
  double p, r, t;
  cout << "Enter principle ammount: ";
  cin >> p;
  cout << "Enter interest rate (in %): ";
  cin >> r;
  cout << "Enter time (in years): ";
  cin >> t;
  double si = (p * r * t) / 100.0;
  cout << "Simple Interest is: " << si << endl;
  return 0;
}
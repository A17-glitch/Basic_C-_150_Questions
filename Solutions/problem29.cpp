// problem 29
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n, sum = 0;
  ;
  cout << "Enter a number: ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    sum += pow(i, 3);
  }
  cout << "Sum of cube numbers from 1 to " << n << " is: " << sum << endl;
  return 0;
}

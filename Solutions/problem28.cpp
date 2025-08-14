// problem 28
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n, sum = 0;
  ;
  cout << "Enter a number: ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    sum += pow(i, 2);
  }
  cout << "Sum of square numbers from 1 to " << n << " is: " << sum << endl;
  return 0;
}

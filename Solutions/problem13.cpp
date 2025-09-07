// problem 13
// problem type : Basic
// question : Find the greatest common divisor (GCD)

#include <iostream>
using namespace std;
int main() {
  int n1, n2, gcd = 1;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;
  int minNum = min(n1, n2);
  for (int i = 1; i <= minNum; i++) {
    if (n1 % i == 0 && n2 % i == 0)
      gcd = i;
  }
  cout << "The GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
  return 0;
}
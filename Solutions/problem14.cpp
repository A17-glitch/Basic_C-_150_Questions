// problem 14
// problem type : Basic
// question : Find the least common multiple (LCM)

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
  int lcm = (n1 * n2) / gcd;
  cout << "The LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
  return 0;
}
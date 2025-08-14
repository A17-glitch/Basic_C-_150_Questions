// problem 16
#include <iostream>
using namespace std;
int main() {
  int n;
  long long int factorial = 1;
  cout << "Enter a number: ";
  cin >> n;
  if (n < 0)
    cout << "Factorial of a negative number is not defined\n";
  else {
    for (int i = 1; i <= n; i++)
      factorial *= i;
    cout << "Factorial of " << n << " is: " << factorial << endl;
  }
  return 0;
}
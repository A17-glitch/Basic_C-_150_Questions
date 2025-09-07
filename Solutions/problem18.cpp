// problem 18
// problem type : Basic
// question : Check if a number is part of the Fibonacci series

/*
Note: A number X is a Fibonacci number if and only if one of these conditions is
true: 5x^2 + 4 or 5x^2 - 4 is a perfect square.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;

  // Check if (5*n^2 + 4) or (5*n^2 - 4) is a perfect square
  int num1 = 5 * n * n + 4;
  int num2 = 5 * n * n - 4;

  int root1 = sqrt(num1);
  int root2 = sqrt(num2);

  if (root1 * root1 == num1 || root2 * root2 == num2)
    cout << n << " is a Fibonacci number\n";
  else
    cout << n << " is not a Fibonacci number\n";

  return 0;
}
// problem 05
// problem type : Basic
// question : Find the maximum of two numbers

#include <iostream>
using namespace std;
int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  int maxNum = (a > b) ? a : b;
  cout << "The maximum number is: " << maxNum << endl;
  return 0;
}
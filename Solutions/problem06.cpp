// problem 06
// problem type : Basic
// question : Find the minimum of two numbers

#include <iostream>
using namespace std;
int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  int minNum = (a < b) ? a : b;
  cout << "The minimum number is: " << minNum << endl;
  return 0;
}
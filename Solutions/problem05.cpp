// problem 05
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
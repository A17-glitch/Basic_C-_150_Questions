// problem 06
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
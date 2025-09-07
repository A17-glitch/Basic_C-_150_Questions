// problem 08
// problem type : Basic
// question : Swap two numbers without using a third variable

#include <iostream>
using namespace std;
int main() {
  int a, b;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << "Before swap:" << endl;
  ;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  // swaping
  a = a + b;
  b = a - b;
  a = a - b;
  cout << "After swap:" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  return 0;
}
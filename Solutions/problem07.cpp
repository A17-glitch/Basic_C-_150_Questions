// problem 07
// problem type : Basic
// question : Swap two numbers using a third variable

#include <iostream>
using namespace std;
int main() {
  int a, b, temp;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << "Before swap:" << endl;
  ;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  // swaping
  temp = a;
  a = b;
  b = temp;
  cout << "After swap:" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  return 0;
}
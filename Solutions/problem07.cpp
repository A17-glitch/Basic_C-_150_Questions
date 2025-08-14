// problem 07
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
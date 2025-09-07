// problem 04
// problem type : Basic
// question : Check even or odd

#include <iostream>
using namespace std;
int main() {
  int a;
  cout << "Enter a number: ";
  cin >> a;
  if (a % 2 == 0)
    cout << "number " << a << " is an even number" << endl;
  else
    cout << "number " << a << " is an odd number" << endl;
  return 0;
}
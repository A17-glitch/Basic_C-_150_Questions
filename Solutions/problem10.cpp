// problem 10
// problem type : Basic
// question : Reverse a number

#include <iostream>
using namespace std;
int main() {
  int n, revs_num = 0;
  cout << "Enter a number: ";
  cin >> n;
  cout << "The number is: " << n << endl;
  while (n > 0) {
    revs_num = revs_num * 10 + n % 10;
    n = n / 10;
  }
  cout << "The reversed number is: " << revs_num << endl;
  return 0;
}
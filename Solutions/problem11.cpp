// problem 11
#include <iostream>
using namespace std;
int main() {
  int n, revs_num = 0;
  cout << "Enter a number: ";
  cin >> n;
  int temp = n;
  cout << "The number is: " << n << endl;
  while (n > 0) {
    revs_num = revs_num * 10 + n % 10;
    n = n / 10;
  }
  if (revs_num == temp)
    cout << "The number is a palindrome number" << endl;
  else
    cout << "The number is not a palindrome number" << endl;
  return 0;
}
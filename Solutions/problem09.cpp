// problem 09
#include <iostream>
using namespace std;
int main() {
  int n, sum = 0;
  cout << "Enter a number: ";
  cin >> n;
  while (n != 0) {
    int last = n % 10;
    sum += last;
    n /= 10;
  }
  cout << "The sum of digits of the number " << n << " is: " << sum << endl;
  return 0;
}
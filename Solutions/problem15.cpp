// problem 15
// problem type : Basic
// question : Check if a number is Armstrong

#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int temp = n, armstrong = 0, count = 0, copy = n;
  while (copy > 0) {
    count++;
    copy /= 10;
  }

  while (n > 0) {
    int last = n % 10;
    armstrong += pow(last, count);
    n /= 10;
  }

  cout << armstrong << endl;
  if (temp == armstrong)
    cout << temp << " is a armstrong number.\n";
  else
    cout << temp << " is not a armstrong number.\n";

  return 0;
}
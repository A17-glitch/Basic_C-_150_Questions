// problem 17
#include <iostream>
using namespace std;
int main() {
  int first = 0, second = 1, n;
  cout << "Enter the number terms: ";
  cin >> n;
  cout << "Fibonacci Series: ";
  for (int i = 1; i <= n; i++) {
    cout << first << " ";
    int next = first + second;
    first = second;
    second = next;
  }
  return 0;
}
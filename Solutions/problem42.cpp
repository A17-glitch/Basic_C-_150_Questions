// problem 42
#include <iostream>
using namespace std;

int power(int x, int n) {

  if (n == 0)
    return 1;

  return x * power(x, n - 1);
}

int main() {
  int x, n;
  cout << "Enter value: ";
  cin >> x;

  cout << "Enter power: ";
  cin >> n;

  cout << power(x, n) << endl;

  return 0;
}
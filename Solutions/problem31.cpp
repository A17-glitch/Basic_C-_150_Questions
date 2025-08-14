// problem 31
#include <iostream>
using namespace std;
int main() {
  int n, store;
  cin >> n;

  while (n % 2) {
    if (n % 2 == 0)
      store = 0;
    else
      store = 1;

    cout << store;
  }

  return 0;
}
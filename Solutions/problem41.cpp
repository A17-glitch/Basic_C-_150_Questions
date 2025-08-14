// problem 41
#include <iostream>
using namespace std;
int main() {
  int n, mult = 1, power;
  cout << "Enter value:";
  cin >> n;
  cout << "Enter power:";
  cin >> power;

  for (int i = 1; i <= power; i++) {
    mult *= n;
  }
  cout << mult << endl;

  return 0;
}
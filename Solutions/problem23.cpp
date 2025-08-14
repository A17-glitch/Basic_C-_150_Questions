// problem 23
#include <iostream>
using namespace std;
int main() {
  //°C = (°F - 32) × 5/9
  int f;
  cout << "Enter Fahrenheit: ";
  cin >> f;
  double calculation = (f - 32) * 5 / 9.0;
  cout << "Fahrenheit is: " << calculation << endl;
  return 0;
}

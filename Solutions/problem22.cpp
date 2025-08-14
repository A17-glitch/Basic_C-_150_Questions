// problem 22
#include <iostream>
using namespace std;
int main() {
  //(0°C × 9/5) + 32 = 32°F
  int c;
  cout << "Enter Celsius: ";
  cin >> c;
  double calculation = (c * 9 / 5.0) + 32;
  cout << "Fahrenheit is: " << calculation << endl;
  return 0;
}

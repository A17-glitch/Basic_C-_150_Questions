// problem 30
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n, count = 0;
  cout << "Enter a number: ";
  cin >> n;
  /*
   while(n){
      count++;
      n/=10;
  }
  */
  count = log10(n) + 1;
  cout << "Number of digits is: " << count << endl;
  return 0;
}

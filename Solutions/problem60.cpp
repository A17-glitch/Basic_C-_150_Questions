// problem 60
#include <bits/stdc++.h>
using namespace std;
int main() {
  string str;
  int count = 0;
  getline(cin, str);

  for (int i = 0; str[i] != '\0'; i++) {
    count++;
  }

  cout << count << endl;

  return 0;
}
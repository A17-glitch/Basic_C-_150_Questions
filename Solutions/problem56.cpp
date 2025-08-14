// problem 56
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  char ch;
  for (int i = 0; i < s.size(); i++) {
    char ch = tolower(s[i]);
    cout << ch;
  }

  return 0;
}
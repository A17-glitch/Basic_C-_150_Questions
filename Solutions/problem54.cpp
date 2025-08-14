// problem 54
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  int count = 0;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    char ch = toupper(s[i]);
    if (ch >= 'A' && ch <= 'Z')
      count++;
  }
  cout << count << endl;

  return 0;
}
// problem 52
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s1;
  cin >> s1;

  string s2 = s1;

  reverse(s2.begin(), s2.end());

  if (s1 == s2)
    cout << "Palindrome" << endl;
  else
    cout << "Not Palindrome" << endl;

  return 0;
}
// problem 58
#include <bits/stdc++.h>
using namespace std;
int main() {
  string str, newstr = "";
  getline(cin, str);
  for (int i = 0; i < str.size(); i++) {
    if (str[i] != ' ') {
      newstr = newstr + str[i];
    }
  }
  cout << newstr << endl;
  return 0;
}
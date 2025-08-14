// problem 59
#include <bits/stdc++.h>
using namespace std;
int main() {
  string str;
  int count = 0;
  getline(cin, str);

  for (int i = 0; i < str.size(); i++) {
    count = 0;
    for (int j = 0; j < str.size(); j++) {
      if(j<i && str[i] == str[j]){
        break;
      }
      if (str[i] == str[j])
        count++;
    }

    if(count!=0)
    cout << str[i]<<" -> "<<count << endl;
  }

  return 0;
}
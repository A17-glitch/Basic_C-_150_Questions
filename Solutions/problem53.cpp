// problem 53
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int vowels = 0, consonants = 0;

  for (int i = 0; i < s.size(); i++) {
    char ch = tolower(s[i]);

    if (isalpha(ch)) {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        vowels++;

      else
        consonants++;
    }
  }

  cout << "Vowels: " << vowels << endl;
  cout << "Consonents: " << consonants << endl;

  return 0;
}
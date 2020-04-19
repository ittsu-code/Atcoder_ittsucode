#include <bits/stdc++.h>
using namespace std;

int func(string s, string t) {
  int ans = 0;
  for (char c = 'a'; c < 'z'; c++) {
    bool founds = false, foundt = false;
    for (int i = 0; i < s.length(); i++) {
      if (s.at(i) == c) {
        founds = true;
      }
    }
    for (int i = 0; i < t.length(); i++) {
      if (t.at(i) == c) {
        foundt = true;
      }
    }
    if (founds && foundt) ans++;
  }
  return ans;
}

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  int ans = 0;
  for (int i = 0; i < N; i++) {
    int tmp = func(S.substr(0, i), S.substr(i));
    ans = max(ans, tmp);
  }

  cout << ans << endl;
}